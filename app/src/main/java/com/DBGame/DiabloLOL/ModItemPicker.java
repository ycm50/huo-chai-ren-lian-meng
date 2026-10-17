package com.DBGame.DiabloLOL;

import android.app.Activity;
import android.app.AlertDialog;
import android.graphics.Color;
import android.graphics.Typeface;
import android.text.Editable;
import android.text.TextWatcher;
import android.view.Gravity;
import android.view.View;
import android.view.ViewGroup;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.BaseAdapter;
import android.widget.Button;
import android.widget.EditText;
import android.widget.LinearLayout;
import android.widget.ListView;
import android.widget.ScrollView;
import android.widget.TextView;
import android.widget.Toast;

import java.util.ArrayList;
import java.util.List;

/**
 * Searchable item picker.
 *
 * The user no longer types a numeric id: they get a list of the game's items
 * with their names and quality, a search box, and a "count" field. Picking a
 * row writes the grant configuration; the native side applies it on next launch.
 *
 * Layout (all built in code so it renders the same on any ROM):
 *
 *     +--------------------------------------------------+
 *     | 搜索: [__________________]          (hint: 名字/ID/品质)
 *     +--------------------------------------------------+
 *     | 圣火                [史诗]        id 100 · Lv 1  |
 *     | 短剑碎片            [普通]        id 101 · Lv 1  |
 *     | ...                                              |
 *     +--------------------------------------------------+
 *     | 数量: [ 1 ]        [取消]      [发放]            |
 *     +--------------------------------------------------+
 */
public final class ModItemPicker {

    /** Called with the chosen item and the requested count. */
    public interface OnPick {
        void onPick(ModItemCatalog.Item item, int count);
    }

    /** Opens the picker. Safe to call from the UI thread only. */
    public static void show(final Activity activity, final OnPick onPick) {
        final List<ModItemCatalog.Item> all = ModItemCatalog.load();

        final LinearLayout root = new LinearLayout(activity);
        root.setOrientation(LinearLayout.VERTICAL);
        int pad = dp(activity, 10);
        root.setPadding(pad, pad, pad, pad);

        /* ---- search row ---- */
        final EditText search = new EditText(activity);
        search.setHint("搜索：名字 / ID / 品质（如 传说）");
        search.setSingleLine(true);
        root.addView(search, new LinearLayout.LayoutParams(
                ViewGroup.LayoutParams.MATCH_PARENT, ViewGroup.LayoutParams.WRAP_CONTENT));

        final TextView status = new TextView(activity);
        status.setTextColor(0xFF888888);
        status.setTextSize(11);
        status.setText(all.isEmpty()
                ? "目录为空：请先启动一次游戏，让 dsh_item_catalog.txt 生成"
                : ("共 " + all.size() + " 个物品"));
        root.addView(status);

        /* ---- list ---- */
        final ListView list = new ListView(activity);
        LinearLayout.LayoutParams lp = new LinearLayout.LayoutParams(
                ViewGroup.LayoutParams.MATCH_PARENT, dp(activity, 260));
        root.addView(list, lp);

        final ItemAdapter adapter = new ItemAdapter(activity, new ArrayList<ModItemCatalog.Item>(all));
        list.setAdapter(adapter);

        /* ---- count row ---- */
        LinearLayout row = new LinearLayout(activity);
        row.setOrientation(LinearLayout.HORIZONTAL);
        row.setGravity(Gravity.CENTER_VERTICAL);

        TextView lbl = new TextView(activity);
        lbl.setText("数量：");
        row.addView(lbl);

        final EditText count = new EditText(activity);
        count.setText("1");
        count.setSingleLine(true);
        count.setInputType(android.text.InputType.TYPE_CLASS_NUMBER);
        row.addView(count, new LinearLayout.LayoutParams(0,
                ViewGroup.LayoutParams.WRAP_CONTENT, 1f));

        root.addView(row);

        final AlertDialog dialog = new AlertDialog.Builder(activity)
                .setTitle("选择物品")
                .setView(root)
                .setNegativeButton("关闭", null)
                .create();

        /* search filtering */
        search.addTextChangedListener(new TextWatcher() {
            @Override public void beforeTextChanged(CharSequence s, int a, int b, int c) { }
            @Override public void onTextChanged(CharSequence s, int a, int b, int c) { }
            @Override public void afterTextChanged(Editable s) {
                List<ModItemCatalog.Item> f = ModItemCatalog.filter(all, s.toString());
                adapter.setItems(f);
                status.setText("共 " + all.size() + " 个物品，匹配 " + f.size() + " 个");
            }
        });

        /* picking a row fills the count and grants */
        list.setOnItemClickListener(new AdapterView.OnItemClickListener() {
            @Override public void onItemClick(AdapterView<?> parent, View view, int position, long id) {
                ModItemCatalog.Item it = (ModItemCatalog.Item) parent.getItemAtPosition(position);
                int n = parseInt(count.getText().toString(), 1);
                if (n <= 0) { n = 1; }
                try { dialog.dismiss(); } catch (Throwable ignored) { }
                if (onPick != null) { onPick.onPick(it, n); }
            }
        });

        dialog.show();
    }

    /** Adapter that renders name + quality badge + id/level sub-line. */
    private static final class ItemAdapter extends BaseAdapter {
        private final Activity act;
        private List<ModItemCatalog.Item> items;

        ItemAdapter(Activity a, List<ModItemCatalog.Item> start) {
            this.act = a;
            this.items = start;
        }

        void setItems(List<ModItemCatalog.Item> next) {
            this.items = next;
            notifyDataSetChanged();
        }

        @Override public int getCount() { return items.size(); }
        @Override public Object getItem(int i) { return items.get(i); }
        @Override public long getItemId(int i) { return items.get(i).id; }

        @Override
        public View getView(int position, View reuse, ViewGroup parent) {
            LinearLayout row = new LinearLayout(act);
            row.setOrientation(LinearLayout.VERTICAL);
            int p = dp(act, 6);
            row.setPadding(p, p, p, p);

            ModItemCatalog.Item it = items.get(position);

            /* top line: name + quality */
            LinearLayout top = new LinearLayout(act);
            top.setOrientation(LinearLayout.HORIZONTAL);
            top.setGravity(Gravity.CENTER_VERTICAL);

            TextView name = new TextView(act);
            name.setText(it.name);
            name.setTextSize(15);
            name.setTextColor(0xFFFFFFFF);
            name.setTypeface(Typeface.DEFAULT_BOLD);
            top.addView(name, new LinearLayout.LayoutParams(0,
                    ViewGroup.LayoutParams.WRAP_CONTENT, 1f));

            String q = ModItemCatalog.qualityText(it.quality);
            if (q.length() > 0) {
                TextView badge = new TextView(act);
                badge.setText(q);
                badge.setTextSize(11);
                badge.setTextColor(ModItemCatalog.qualityColor(it.quality));
                badge.setPadding(dp(act, 6), dp(act, 1), dp(act, 6), dp(act, 1));
                top.addView(badge);
            }
            row.addView(top);

            /* sub line: id · level · bag type */
            TextView sub = new TextView(act);
            sub.setText(it.sub());
            sub.setTextSize(11);
            sub.setTextColor(0xFF9E9E9E);
            row.addView(sub);

            return row;
        }
    }

    private static int parseInt(String s, int def) {
        try { return Integer.parseInt(s.trim()); } catch (Throwable t) { return def; }
    }

    private static int dp(Activity a, int v) {
        float d = a.getResources().getDisplayMetrics().density;
        return (int) (v * d + 0.5f);
    }

    private ModItemPicker() { }
}
