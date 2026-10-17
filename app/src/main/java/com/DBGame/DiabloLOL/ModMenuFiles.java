package com.DBGame.DiabloLOL;

import android.os.Environment;
import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.util.ArrayList;
import java.util.List;

/**
 * R283 -- bridge between the Java menu (UI) and our native patch (libpatch.so).
 *
 * The patch reads two plain files; this class is the only place that writes them,
 * so the UI can be swapped out without touching the native side again:
 *
 *   /sdcard/dsh_items.txt   one line per grant:  "<itemId> <count>"
 *                           -> patch calls DataManager::createItemData(id) + addItem(...)
 *   /sdcard/dsh_show.txt    presence only (even empty) -> patch actively constructs the
 *                           gift / 7-day-login / month-card / VIP entries so that they are
 *                           visible "at all times" instead of being gated by progress.
 *
 * Deliberately UI-free: the menu can be built later (or on top of the existing
 * CmPopupWindow) without changing this file.
 */
public final class ModMenuFiles
{
    public static final String ITEMS_FILE = "dsh_items.txt";
    public static final String SHOW_FILE  = "dsh_show.txt";
    public static final String ATTRS_FILE = "dsh_item_attrs.txt";

    /**
     * R361 -- config files live in the app's own external dir, NOT in /sdcard root.
     *
     * Writing to /sdcard root throws EPERM on Android 11+ (scoped storage), even with
     * WRITE_EXTERNAL_STORAGE granted. The app-specific directory below is always
     * writable without any permission and has a stable absolute path, so the native
     * patch can open exactly the same file from C.
     */
    public static final String APP_DIR = "Android/data/com.DBGame.DiabloLOL/files";

    /** Application context, so we can use getExternalFilesDir() (which creates the dir). */
    private static android.content.Context sCtx;

    private ModMenuFiles() { }

    /** Called once from CmgameApplication.onCreate(). */
    public static void init(android.content.Context ctx)
    {
        if (ctx != null) { sCtx = ctx.getApplicationContext(); }
    }

    /** The shared config directory, created on demand.
     *
     *  R410: the native side (libpatch.so, hw_cfg_path) reads and writes these files in
     *  the app-private directory /data/data/<pkg>/files/ -- that path needs no
     *  permission and is unaffected by scoped storage. Java used to use
     *  getExternalFilesDir() (/storage/emulated/0/Android/data/<pkg>/files), which is a
     *  DIFFERENT directory, so the picker could never see dsh_item_catalog.txt.
     *  Both sides must agree: internal dir first, external only as a fallback.
     */
    public static File dir()
    {
        if (sCtx != null) {
            File d = sCtx.getFilesDir();           /* /data/data/<pkg>/files */
            if (d != null) {
                if (!d.exists()) { d.mkdirs(); }
                if (d.isDirectory()) { return d; }
            }
        }
        if (sCtx != null) {
            File d = sCtx.getExternalFilesDir(null);
            if (d != null) {
                if (!d.exists()) { d.mkdirs(); }
                return d;
            }
        }
        File d = new File(Environment.getExternalStorageDirectory(), APP_DIR);
        if (!d.exists()) { d.mkdirs(); }
        return d;
    }

    private static File file(String name)
    {
        return new File(dir(), name);
    }

    /** Write the grant list. ids[i] is granted counts[i] times. Returns null on success. */
    public static String writeItems(List<Integer> ids, List<Integer> counts)
    {
        if (ids == null || counts == null || ids.size() != counts.size()) {
            return "id/count lists are missing or differ in length";
        }
        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < ids.size(); i++) {
            Integer id = ids.get(i), cnt = counts.get(i);
            if (id == null || cnt == null || cnt <= 0) { continue; }
            sb.append(id).append(' ').append(cnt).append('\n');
        }
        return writeText(file(ITEMS_FILE), sb.toString());
    }

    /* ------------------------------------------------------------------
     * R412: granting now goes through the SQLite path, which is the only
     * mechanism proven to take effect.
     *
     * Old behaviour wrote dsh_items.txt, but the native side skips that path
     * ("items: granting is unsupported") because addItem needs the GL thread
     * and the dictionary is NULL on a fresh account -- so nothing ever
     * happened and the money/backpack never changed.
     *
     * The working pipeline is:
     *   dsh_sqlexec.txt  ->  SQL executed against the player database
     *   dsh_early.txt    ->  trigger, runs the SQL very early on next launch
     *
     * For money (item 1 = 铜钱, 2 = 钻石, 3 = 经验) we additionally update the
     * user table columns copper/gold, because the backpack table is for real
     * items while the currency lives in user.copper / user.gold.
     * ------------------------------------------------------------------ */

    public static final String SQLEXEC_FILE = "dsh_sqlexec.txt";
    public static final String EARLY_FILE   = "dsh_early.txt";

    /** Grants one item through the SQLite path. Returns null on success. */
    public static String grantOne(int itemId, int count)
    {
        if (itemId <= 0) { return "无效的物品 id"; }
        if (count <= 0)  { count = 1; }
        if (count > 999999) { count = 999999; }

        StringBuilder sql = new StringBuilder();

        /* real items -> backpack table (7 columns, equipindex 0 = sitting in the bag) */
        sql.append("DELETE FROM backpack WHERE itemid=").append(itemId).append('\n');
        sql.append("INSERT INTO backpack (itemid,num,lv,roleid,equipindex,upgracetime) VALUES (")
           .append(itemId).append(',').append(count).append(",1,0,0,0)\n");

        /* currency ids also live in the user table */
        if (itemId == 1) {
            sql.append("UPDATE user SET copper=").append(count).append('\n');
        } else if (itemId == 2) {
            sql.append("UPDATE user SET gold=").append(count).append('\n');
        }

        String err = writeText(file(SQLEXEC_FILE), sql.toString());
        if (err != null) { return err; }

        /* arm the early trigger so the SQL runs before the game builds its model */
        File early = file(EARLY_FILE);
        if (!early.exists()) {
            String e2 = writeText(early, "on\n");
            if (e2 != null) { return e2; }
        }
        return null;
    }

    /** Reads back what is queued, for the MOD menu status line. */
    public static String pendingSql()
    {
        File f = file(SQLEXEC_FILE);
        if (!f.exists()) { return ""; }
        StringBuilder sb = new StringBuilder();
        try {
            java.io.BufferedReader r = new java.io.BufferedReader(
                    new java.io.InputStreamReader(new java.io.FileInputStream(f), "UTF-8"));
            String line;
            while ((line = r.readLine()) != null) {
                if (line.trim().length() > 0) { sb.append(line).append('\n'); }
            }
            r.close();
        } catch (Throwable ignored) { }
        return sb.toString();
    }

    /** Removes the queued SQL (useful after a run so it is not repeated). */
    public static void clearPendingSql()
    {
        File f = file(SQLEXEC_FILE);
        if (f.exists()) { f.delete(); }
    }

    /** Enable/disable the "entries are always visible" behaviour of the patch. */
    public static String setAlwaysShow(boolean enabled)
    {
        File f = file(SHOW_FILE);
        if (enabled) { return writeText(f, "on\n"); }
        if (f.exists() && !f.delete()) { return "could not delete " + f.getAbsolutePath(); }
        return null;
    }

    public static boolean isAlwaysShowEnabled()
    {
        return file(SHOW_FILE).exists();
    }

    /** Read back the current grant list (so the UI can show / edit it). */
    public static List<int[]> readItems()
    {
        List<int[]> out = new ArrayList<int[]>();
        File f = file(ITEMS_FILE);
        if (!f.exists()) { return out; }
        try {
            java.io.BufferedReader r = new java.io.BufferedReader(new java.io.FileReader(f));
            try {
                String line;
                while ((line = r.readLine()) != null) {
                    String[] p = line.trim().split("\\s+");
                    if (p.length >= 2) {
                        out.add(new int[] { Integer.parseInt(p[0]), Integer.parseInt(p[1]) });
                    }
                }
            } finally { r.close(); }
        } catch (Exception e) { /* unreadable -> report as empty */ }
        return out;
    }

    private static String writeText(File f, String text)
    {
        FileOutputStream os = null;
        try {
            os = new FileOutputStream(f, false);
            os.write(text.getBytes("UTF-8"));
            os.flush();
            return null;
        } catch (IOException e) {
            return "write failed: " + e.getMessage();
        } finally {
            if (os != null) { try { os.close(); } catch (IOException ignored) { } }
        }
    }
}
