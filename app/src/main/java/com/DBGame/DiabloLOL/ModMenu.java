package com.DBGame.DiabloLOL;

import android.app.Activity;
import android.app.AlertDialog;
import android.graphics.Color;
import android.os.Handler;
import android.os.Looper;
import android.text.InputType;
import android.view.Gravity;
import android.view.View;
import android.view.ViewGroup;
import android.widget.Button;
import android.widget.CheckBox;
import android.widget.EditText;
import android.widget.FrameLayout;
import android.widget.LinearLayout;
import android.widget.ScrollView;
import android.widget.TextView;
import android.widget.Toast;

import java.lang.ref.WeakReference;
import java.util.List;

/**
 * R285/R360 -- the mod menu UI (floating "MOD" button).
 *
 * Self-contained on purpose: only SDK widgets (no dependency on the game's own popup
 * classes), and it talks to the native patch exclusively through ModMenuFiles, which
 * writes /sdcard/dsh_items.txt and /sdcard/dsh_item_attrs.txt.
 *
 * Why this class was rewritten (R360):
 *   The previous version used a single global "already attached" boolean. The splash
 *   activity set it to true, so every later activity (the actual game activity) was
 *   skipped and the MOD button vanished after the first screen.
 *   It also used addContentView(), which inserts into android.R.id.content -- any
 *   subsequent setContentView() by the game throws the button away.
 *
 *   Now we:
 *     * track the *host activity* (WeakReference), so each activity gets its own attach
 *     * attach into the window's decorView, which survives setContentView() calls
 *     * re-install a few times after resume (self-heal), because some game activities
 *       rebuild their view tree shortly after onResume
 *     * rebuild the button when the host changes (avoids using a stale Context)
 */
public final class ModMenu
{
    private ModMenu() { }

    private static WeakReference<Activity> sHost = new WeakReference<Activity>(null);
    private static Button sBtn;
    private static final Handler sUi = new Handler(Looper.getMainLooper());

    /** Delays (ms) after resume at which we re-check that the button is still mounted. */
    private static final int[] RESCUE_DELAYS = { 300, 1000, 2200, 4000 };

    /**
     * Ensure the floating button is present on this activity.
     * Safe to call on every onActivityResumed().
     */
    public static void attach(final Activity activity)
    {
        if (activity == null) { return; }
        try {
            final Activity host = sHost.get();

            if (host != activity) {
                /* Host changed (splash -> game, or a new activity): drop the old button. */
                removeButton();
                sHost = new WeakReference<Activity>(activity);
                sBtn = null;
            }

            install(activity);

            /* Self-heal: the game may replace its view tree right after onResume. */
            for (int i = 0; i < RESCUE_DELAYS.length; i++) {
                final int delay = RESCUE_DELAYS[i];
                sUi.postDelayed(new Runnable() {
                    @Override public void run() {
                        try {
                            if (sHost.get() == activity) { install(activity); }
                        } catch (Throwable ignored) { }
                    }
                }, delay);
            }
        } catch (Throwable ignored) { }
    }

    /** Create (if needed) and mount the button above the activity's content view. */
    private static void install(final Activity activity)
    {
        try {
            if (activity.isFinishing()) { return; }

            if (sBtn == null) { sBtn = buildButton(activity); }

            /* Already mounted somewhere in this window? Nothing to do. */
            ViewGroup parent = (ViewGroup) sBtn.getParent();
            if (parent != null && parent.getWindowToken() != null) { return; }

            if (sBtn.getParent() != null) {
                ((ViewGroup) sBtn.getParent()).removeView(sBtn);
            }

            /* R361: addContentView (not decorView!). Adding a child straight into the
               decor view disturbed the window layout and left the game rendering
               misaligned. addContentView targets android.R.id.content, which stacks the
               button on top of the GL surface without touching the window geometry. */
            int flag = Gravity.TOP | Gravity.END;
            ViewGroup content = (ViewGroup) activity.findViewById(android.R.id.content);
            ViewGroup.LayoutParams lp;
            if (content instanceof FrameLayout) {
                FrameLayout.LayoutParams f = new FrameLayout.LayoutParams(
                        ViewGroup.LayoutParams.WRAP_CONTENT,
                        ViewGroup.LayoutParams.WRAP_CONTENT, flag);
                f.setMargins(0, 90, 12, 0);
                lp = f;
            } else {
                LinearLayout.LayoutParams l = new LinearLayout.LayoutParams(
                        ViewGroup.LayoutParams.WRAP_CONTENT,
                        ViewGroup.LayoutParams.WRAP_CONTENT);
                l.gravity = flag;
                l.setMargins(0, 90, 12, 0);
                lp = l;
            }

            activity.addContentView(sBtn, lp);
        } catch (Throwable ignored) { }
    }

    private static Button buildButton(final Activity activity)
    {
        Button btn = new Button(activity);
        btn.setText("MOD");
        btn.setTextSize(12f);
        btn.setTextColor(Color.WHITE);
        btn.setBackgroundColor(0xCC7A00CC);          // translucent purple
        btn.setAlpha(0.85f);
        btn.setPadding(18, 6, 18, 6);
        btn.setOnClickListener(new View.OnClickListener() {
            @Override public void onClick(View v) {
                Activity a = sHost.get();
                if (a == null) { a = activity; }
                showDialog(a);
            }
        });
        return btn;
    }

    private static void removeButton()
    {
        try {
            if (sBtn != null && sBtn.getParent() instanceof ViewGroup) {
                ((ViewGroup) sBtn.getParent()).removeView(sBtn);
            }
        } catch (Throwable ignored) { }
        sBtn = null;
    }

    /** R409: the item id is now chosen from a searchable list instead of typed. */
    private static void showDialog(final Activity activity)
    {
        final TextView status   = new TextView(activity);
        final CheckBox always   = new CheckBox(activity);

        always.setText("\u5165\u53e3\u5e38\u663e (gift / 7-day / month card / VIP always visible)");
        always.setChecked(ModMenuFiles.isAlwaysShowEnabled());
        status.setTextColor(Color.DKGRAY);
        status.setTextSize(11f);
        status.setText(listText());

        Button pick = new Button(activity);
        pick.setText("\u9009\u62e9\u7269\u54c1\u53d1\u653e (search by name)");
        pick.setOnClickListener(new View.OnClickListener() {
            @Override public void onClick(View v) {
                try {
                    ModItemPicker.show(activity, new ModItemPicker.OnPick() {
                        @Override public void onPick(ModItemCatalog.Item item, int count) {
                            String err = ModMenuFiles.grantOne(item.id, count);
                            if (err != null) { toast(activity, err); return; }
                            toast(activity,
                                    "已写入: " + item.name + " x" + count
                                    + " (" + ModItemCatalog.qualityText(item.quality) + ")\n"
                                    + "重启游戏后生效（游戏只在启动时读取数据）");
                        }
                    });
                } catch (Throwable t) {
                    toast(activity, "\u6253\u5f00\u5217\u8868\u5931\u8d25: " + t);
                }
            }
        });

        LinearLayout box = new LinearLayout(activity);
        box.setOrientation(LinearLayout.VERTICAL);
        int pad = (int) (12 * activity.getResources().getDisplayMetrics().density);
        box.setPadding(pad, pad, pad, pad);
        box.addView(pick);
        box.addView(always);
        box.addView(status);

        ScrollView scroll = new ScrollView(activity);
        scroll.addView(box);

        new AlertDialog.Builder(activity)
            .setTitle("MOD \u83dc\u5355")
            .setView(scroll)
            .setNeutralButton("\u4fdd\u5b58\u5f00\u5173 (toggle)", new android.content.DialogInterface.OnClickListener() {
                @Override public void onClick(android.content.DialogInterface d, int w)
                {
                    String err = ModMenuFiles.setAlwaysShow(always.isChecked());
                    toast(activity, err == null ? "\u5f00\u5173\u5df2\u4fdd\u5b58" : err);
                }
            })
            .setNegativeButton("\u5173\u95ed", null)
            .show();
    }

    private static String listText()
    {
        List<int[]> cur = ModMenuFiles.readItems();
        if (cur.isEmpty()) { return "\u5f53\u524d\u5217\u8868: (\u7a7a)"; }
        StringBuilder sb = new StringBuilder("\u5f53\u524d\u5217\u8868: ");
        for (int i = 0; i < cur.size() && i < 20; i++) {
            sb.append(cur.get(i)[0]).append('x').append(cur.get(i)[1]).append(' ');
        }
        if (cur.size() > 20) { sb.append("..."); }
        return sb.toString();
    }

    private static int parseInt(String s, int def)
    {
        try { return Integer.parseInt(s.trim()); } catch (Exception e) { return def; }
    }

    private static void toast(Activity a, String msg)
    {
        try { Toast.makeText(a, msg, Toast.LENGTH_SHORT).show(); } catch (Throwable ignored) { }
    }
}
