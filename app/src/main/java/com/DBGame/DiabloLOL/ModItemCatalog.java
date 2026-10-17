package com.DBGame.DiabloLOL;

import java.io.BufferedReader;
import java.io.File;
import java.io.FileInputStream;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.List;

/**
 * Item catalog: reads dsh_item_catalog.txt (written by libpatch.so) and exposes
 * the item list to the MOD menu picker.
 *
 * File format produced by the native side (hw_item_catalog):
 *
 *     #COLS serial,id,name,bagType,bigType,...,quality,...
 *     <id>|<name>|<quality>|<bagType>|<level>
 *     ...
 *
 * The catalog exists so the user can pick an item by NAME from a searchable
 * list instead of having to know the numeric id.
 */
public final class ModItemCatalog {

    public static final String CATALOG_FILE = "dsh_item_catalog.txt";

    /** One row of the catalog. */
    public static final class Item {
        public final int    id;
        public final String name;
        public final String quality;
        public final String bagType;
        public final String level;

        Item(int id, String name, String quality, String bagType, String level) {
            this.id      = id;
            this.name    = name;
            this.quality = quality;
            this.bagType = bagType;
            this.level   = level;
        }

        /** Text shown in the list: "名字  (品质)" */
        public String label() {
            String q = qualityText(quality);
            if (q.length() == 0) { return name; }
            return name + "   [" + q + "]";
        }

        /** Secondary line under the name. */
        public String sub() {
            StringBuilder sb = new StringBuilder();
            sb.append("id ").append(id);
            if (level != null && level.length() > 0) { sb.append("  ·  Lv ").append(level); }
            if (bagType != null && bagType.length() > 0) {
                sb.append("  ·  ").append(bagTypeText(bagType));
            }
            return sb.toString();
        }
    }

    /** Maps the game's numeric quality to a readable grade. */
    public static String qualityText(String q) {
        if (q == null) { return ""; }
        String t = q.trim();
        if (t.length() == 0) { return ""; }
        int v;
        try { v = Integer.parseInt(t); } catch (NumberFormatException e) { return t; }
        switch (v) {
            case 0:  return "普通";
            case 1:  return "优良";
            case 2:  return "精良";
            case 3:  return "史诗";
            case 4:  return "传说";
            case 5:  return "神话";
            default: return "品质 " + v;
        }
    }

    /** Colour for the quality, used by the picker. */
    public static int qualityColor(String q) {
        if (q == null) { return 0xFFDDDDDD; }
        int v;
        try { v = Integer.parseInt(q.trim()); } catch (NumberFormatException e) { return 0xFFDDDDDD; }
        switch (v) {
            case 0:  return 0xFFB8B8B8;   /* 普通 灰 */
            case 1:  return 0xFF4CD964;   /* 优良 绿 */
            case 2:  return 0xFF3AA0FF;   /* 精良 蓝 */
            case 3:  return 0xFFB45CFF;   /* 史诗 紫 */
            case 4:  return 0xFFFFA726;   /* 传说 橙 */
            case 5:  return 0xFFFF5252;   /* 神话 红 */
            default: return 0xFFDDDDDD;
        }
    }

    private static String bagTypeText(String b) {
        if (b == null) { return ""; }
        int v;
        try { v = Integer.parseInt(b.trim()); } catch (NumberFormatException e) { return b; }
        switch (v) {
            case 0:  return "材料";
            case 1:  return "装备";
            case 2:  return "消耗品";
            case 3:  return "碎片";
            default: return "类型 " + v;
        }
    }

    /** Loads the whole catalog. Returns an empty list when the file is missing. */
    public static List<Item> load() {
        List<Item> out = new ArrayList<Item>();
        File f = new File(ModMenuFiles.dir(), CATALOG_FILE);
        if (!f.exists() || f.length() == 0) { return out; }

        BufferedReader r = null;
        try {
            r = new BufferedReader(new InputStreamReader(new FileInputStream(f), "UTF-8"));
            String line;
            while ((line = r.readLine()) != null) {
                if (line.length() == 0) { continue; }
                if (line.charAt(0) == '#') { continue; }      /* #COLS header */
                String[] p = line.split("\\|", -1);
                if (p.length < 2) { continue; }
                int id;
                try { id = Integer.parseInt(p[0].trim()); } catch (NumberFormatException e) { continue; }
                if (id <= 0) { continue; }
                String name = p[1].trim();
                if (name.length() == 0) { continue; }
                out.add(new Item(
                        id,
                        name,
                        p.length > 2 ? p[2].trim() : "",
                        p.length > 3 ? p[3].trim() : "",
                        p.length > 4 ? p[4].trim() : ""));
            }
        } catch (Throwable ignored) {
        } finally {
            try { if (r != null) { r.close(); } } catch (Throwable ignored) { }
        }
        return out;
    }

    /** Case-insensitive search over name, id and quality text. */
    public static List<Item> filter(List<Item> all, String query) {
        if (query == null || query.trim().length() == 0) { return all; }
        String q = query.trim().toLowerCase();
        List<Item> out = new ArrayList<Item>();
        for (int i = 0; i < all.size(); i++) {
            Item it = all.get(i);
            if (it.name.toLowerCase().contains(q)
                    || String.valueOf(it.id).equals(q)
                    || String.valueOf(it.id).startsWith(q)
                    || qualityText(it.quality).contains(q)) {
                out.add(it);
            }
        }
        return out;
    }

    private ModItemCatalog() { }
}
