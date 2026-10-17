package org.json.alipay;

import java.util.Collection;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;

/* loaded from: classes.dex */
public class b {

    /* renamed from: a, reason: collision with root package name */
    public static final Object f4866a = new a((byte) 0);

    /* renamed from: b, reason: collision with root package name */
    private Map f4867b;

    private static final class a {
        private a() {
        }

        /* synthetic */ a(byte b2) {
            this();
        }

        protected final Object clone() {
            return this;
        }

        public final boolean equals(Object obj) {
            return obj == null || obj == this;
        }

        public final String toString() {
            return "null";
        }
    }

    public b() {
        this.f4867b = new HashMap();
    }

    public b(String str) {
        this(new c(str));
    }

    public b(Map map) {
        this.f4867b = map == null ? new HashMap() : map;
    }

    /*  JADX ERROR: JadxRuntimeException in pass: RegionMakerVisitor
        jadx.core.utils.exceptions.JadxRuntimeException: Failed to find switch 'out' block (already processed)
        	at jadx.core.dex.visitors.regions.maker.SwitchRegionMaker.calcSwitchOut(SwitchRegionMaker.java:202)
        	at jadx.core.dex.visitors.regions.maker.SwitchRegionMaker.process(SwitchRegionMaker.java:61)
        	at jadx.core.dex.visitors.regions.maker.RegionMaker.traverse(RegionMaker.java:115)
        	at jadx.core.dex.visitors.regions.maker.RegionMaker.makeRegion(RegionMaker.java:69)
        	at jadx.core.dex.visitors.regions.maker.LoopRegionMaker.makeEndlessLoop(LoopRegionMaker.java:281)
        	at jadx.core.dex.visitors.regions.maker.LoopRegionMaker.process(LoopRegionMaker.java:64)
        	at jadx.core.dex.visitors.regions.maker.RegionMaker.traverse(RegionMaker.java:92)
        	at jadx.core.dex.visitors.regions.maker.RegionMaker.makeRegion(RegionMaker.java:69)
        	at jadx.core.dex.visitors.regions.maker.IfRegionMaker.process(IfRegionMaker.java:100)
        	at jadx.core.dex.visitors.regions.maker.RegionMaker.traverse(RegionMaker.java:109)
        	at jadx.core.dex.visitors.regions.maker.RegionMaker.makeRegion(RegionMaker.java:69)
        	at jadx.core.dex.visitors.regions.maker.RegionMaker.makeMthRegion(RegionMaker.java:49)
        	at jadx.core.dex.visitors.regions.RegionMakerVisitor.visit(RegionMakerVisitor.java:25)
        */
    public b(org.json.alipay.c r4) {
        /*
            r3 = this;
            r3.<init>()
            char r0 = r4.c()
            r1 = 123(0x7b, float:1.72E-43)
            if (r0 == r1) goto L15
            java.lang.String r0 = "A JSONObject text must begin with '{'"
            org.json.alipay.JSONException r0 = r4.a(r0)
            throw r0
        L12:
            r4.a()
        L15:
            char r0 = r4.c()
            switch(r0) {
                case 0: goto L48;
                case 125: goto L80;
                default: goto L1c;
            }
        L1c:
            r4.a()
            java.lang.Object r0 = r4.d()
            java.lang.String r0 = r0.toString()
            char r1 = r4.c()
            r2 = 61
            if (r1 != r2) goto L4f
            char r1 = r4.b()
            r2 = 62
            if (r1 == r2) goto L3a
            r4.a()
        L3a:
            java.lang.Object r1 = r4.d()
            if (r0 != 0) goto L5a
            org.json.alipay.JSONException r0 = new org.json.alipay.JSONException
            java.lang.String r1 = "Null key."
            r0.<init>(r1)
            throw r0
        L48:
            java.lang.String r0 = "A JSONObject text must end with '}'"
            org.json.alipay.JSONException r0 = r4.a(r0)
            throw r0
        L4f:
            r2 = 58
            if (r1 == r2) goto L3a
            java.lang.String r0 = "Expected a ':' after a key"
            org.json.alipay.JSONException r0 = r4.a(r0)
            throw r0
        L5a:
            if (r1 == 0) goto L72
            b(r1)
            java.util.Map r2 = r3.f4867b
            r2.put(r0, r1)
        L64:
            char r0 = r4.c()
            switch(r0) {
                case 44: goto L78;
                case 59: goto L78;
                case 125: goto L80;
                default: goto L6b;
            }
        L6b:
            java.lang.String r0 = "Expected a ',' or '}'"
            org.json.alipay.JSONException r0 = r4.a(r0)
            throw r0
        L72:
            java.util.Map r1 = r3.f4867b
            r1.remove(r0)
            goto L64
        L78:
            char r0 = r4.c()
            r1 = 125(0x7d, float:1.75E-43)
            if (r0 != r1) goto L12
        L80:
            return
        */
        throw new UnsupportedOperationException("Method not decompiled: org.json.alipay.b.<init>(org.json.alipay.c):void");
    }

    static String a(Object obj) throws JSONException {
        if (obj == null || obj.equals(null)) {
            return "null";
        }
        if (!(obj instanceof Number)) {
            return ((obj instanceof Boolean) || (obj instanceof b) || (obj instanceof org.json.alipay.a)) ? obj.toString() : obj instanceof Map ? new b((Map) obj).toString() : obj instanceof Collection ? new org.json.alipay.a((Collection) obj).toString() : obj.getClass().isArray() ? new org.json.alipay.a(obj).toString() : c(obj.toString());
        }
        Number number = (Number) obj;
        if (number == null) {
            throw new JSONException("Null pointer");
        }
        b(number);
        String obj2 = number.toString();
        if (obj2.indexOf(46) <= 0 || obj2.indexOf(101) >= 0 || obj2.indexOf(69) >= 0) {
            return obj2;
        }
        while (obj2.endsWith("0")) {
            obj2 = obj2.substring(0, obj2.length() - 1);
        }
        return obj2.endsWith(".") ? obj2.substring(0, obj2.length() - 1) : obj2;
    }

    private static void b(Object obj) throws JSONException {
        if (obj != null) {
            if (obj instanceof Double) {
                if (((Double) obj).isInfinite() || ((Double) obj).isNaN()) {
                    throw new JSONException("JSON does not allow non-finite numbers.");
                }
            } else if (obj instanceof Float) {
                if (((Float) obj).isInfinite() || ((Float) obj).isNaN()) {
                    throw new JSONException("JSON does not allow non-finite numbers.");
                }
            }
        }
    }

    public static String c(String str) {
        int i = 0;
        if (str == null || str.length() == 0) {
            return "\"\"";
        }
        int length = str.length();
        StringBuffer stringBuffer = new StringBuffer(length + 4);
        stringBuffer.append('\"');
        char c = 0;
        while (i < length) {
            char charAt = str.charAt(i);
            switch (charAt) {
                case '\b':
                    stringBuffer.append("\\b");
                    break;
                case '\t':
                    stringBuffer.append("\\t");
                    break;
                case '\n':
                    stringBuffer.append("\\n");
                    break;
                case '\f':
                    stringBuffer.append("\\f");
                    break;
                case '\r':
                    stringBuffer.append("\\r");
                    break;
                case '\"':
                case '\\':
                    stringBuffer.append('\\');
                    stringBuffer.append(charAt);
                    break;
                case '/':
                    if (c == '<') {
                        stringBuffer.append('\\');
                    }
                    stringBuffer.append(charAt);
                    break;
                default:
                    if (charAt >= ' ' && ((charAt < 128 || charAt >= 160) && (charAt < 8192 || charAt >= 8448))) {
                        stringBuffer.append(charAt);
                        break;
                    } else {
                        stringBuffer.append("\\u" + ("000" + Integer.toHexString(charAt)).substring(("000" + Integer.toHexString(charAt)).length() - 4));
                        break;
                    }
            }
            i++;
            c = charAt;
        }
        stringBuffer.append('\"');
        return stringBuffer.toString();
    }

    public final Object a(String str) throws JSONException {
        Object obj = str == null ? null : this.f4867b.get(str);
        if (obj == null) {
            throw new JSONException("JSONObject[" + c(str) + "] not found.");
        }
        return obj;
    }

    public final Iterator a() {
        return this.f4867b.keySet().iterator();
    }

    public final boolean b(String str) {
        return this.f4867b.containsKey(str);
    }

    public String toString() {
        try {
            Iterator a2 = a();
            StringBuffer stringBuffer = new StringBuffer("{");
            while (a2.hasNext()) {
                if (stringBuffer.length() > 1) {
                    stringBuffer.append(',');
                }
                Object next = a2.next();
                stringBuffer.append(c(next.toString()));
                stringBuffer.append(':');
                stringBuffer.append(a(this.f4867b.get(next)));
            }
            stringBuffer.append('}');
            return stringBuffer.toString();
        } catch (Exception e) {
            return null;
        }
    }
}
