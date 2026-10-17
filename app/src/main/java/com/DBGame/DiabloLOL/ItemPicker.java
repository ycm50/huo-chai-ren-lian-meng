package com.DBGame.DiabloLOL;

import android.os.Environment;

import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.util.ArrayList;
import java.util.List;

/**
 * R293 -- data layer for the item picker.
 *
 * The native patch writes the real item table it finds at runtime:
 *   /sdcard/dsh_items_all.txt   one item id per line
 * (see hw_export_thread in patch_functions.cpp -- enabled by creating
 *  /sdcard/dsh_export.txt, because enumeration is a ~3000 step probe).
 *
 * This class only reads that file, so the UI can offer a real picker instead of
 * asking the user to remember ids. Nothing here touches the game.
 */
public final class ItemPicker
{
    public static final String EXPORT_FILE = "dsh_items_all.txt";
    public static final String EXPORT_TRIGGER = "dsh_export.txt";

    private ItemPicker() { }

    public static File exportFile()
    {
        return new File(Environment.getExternalStorageDirectory(), EXPORT_FILE);
    }

    /** Ask the patch to (re)enumerate the table; the list appears shortly afterwards. */
    public static String requestExport()
    {
        File trigger = new File(Environment.getExternalStorageDirectory(), EXPORT_TRIGGER);
        try {
            java.io.FileOutputStream os = new java.io.FileOutputStream(trigger, false);
            os.write("export\n".getBytes("UTF-8"));
            os.close();
            return null;
        } catch (Exception e) {
            return "request failed: " + e.getMessage();
        }
    }

    public static boolean hasExport()
    {
        File f = exportFile();
        return f.exists() && f.length() > 0;
    }

    /** All item ids found in the export, in file order. Empty if not exported yet. */
    public static List<Integer> itemIds()
    {
        List<Integer> out = new ArrayList<Integer>();
        File f = exportFile();
        if (!f.exists()) { return out; }
        BufferedReader r = null;
        try {
            r = new BufferedReader(new FileReader(f));
            String line;
            while ((line = r.readLine()) != null) {
                line = line.trim();
                if (line.length() == 0) { continue; }
                try { out.add(Integer.valueOf(Integer.parseInt(line))); }
                catch (NumberFormatException ignored) { }
            }
        } catch (Exception e) {
            // unreadable -> report as empty; the UI can offer requestExport() again
        } finally {
            if (r != null) { try { r.close(); } catch (Exception ignored) { } }
        }
        return out;
    }

    /** Compact summary for the menu ("137 ids, 1..2999"). */
    public static String summary()
    {
        List<Integer> ids = itemIds();
        if (ids.isEmpty()) { return "item \u8868\u5c1a\u672a\u5bfc\u51fa\uff08\u8bf7\u5148\u5bfc\u51fa\uff09"; }
        int lo = ids.get(0), hi = ids.get(0);
        for (Integer v : ids) { int x = v.intValue(); if (x < lo) lo = x; if (x > hi) hi = x; }
        return ids.size() + " ids (" + lo + ".." + hi + ")";
    }

    /** Grant the k-th exported id (for a simple list UI without a spinner widget). */
    public static String grantIndex(int index, int count)
    {
        List<Integer> ids = itemIds();
        if (index < 0 || index >= ids.size()) { return "index out of range (" + ids.size() + " ids)"; }
        return ModMenuFiles.grantOne(ids.get(index).intValue(), count);
    }
}
