package org.json.alipay;

import java.lang.reflect.Array;
import java.util.ArrayList;
import java.util.Collection;

/* loaded from: classes.dex */
public class a {

    /* renamed from: a, reason: collision with root package name */
    private ArrayList f4865a;

    public a() {
        this.f4865a = new ArrayList();
    }

    public a(Object obj) throws JSONException {
        this();
        if (!obj.getClass().isArray()) {
            throw new JSONException("JSONArray initial value should be a string or collection or array.");
        }
        int length = Array.getLength(obj);
        for (int i = 0; i < length; i++) {
            this.f4865a.add(Array.get(obj, i));
        }
    }

    public a(String str) {
        this(new c(str));
    }

    public a(Collection collection) {
        this.f4865a = collection == null ? new ArrayList() : new ArrayList(collection);
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
    public a(org.json.alipay.c r5) {
        /*
            r4 = this;
            r1 = 93
            r4.<init>()
            char r0 = r5.c()
            r2 = 91
            if (r0 != r2) goto L15
            r0 = r1
        Le:
            char r2 = r5.c()
            if (r2 != r1) goto L23
        L14:
            return
        L15:
            r2 = 40
            if (r0 != r2) goto L1c
            r0 = 41
            goto Le
        L1c:
            java.lang.String r0 = "A JSONArray text must start with '['"
            org.json.alipay.JSONException r0 = r5.a(r0)
            throw r0
        L23:
            r5.a()
        L26:
            char r2 = r5.c()
            r3 = 44
            if (r2 != r3) goto L45
            r5.a()
            java.util.ArrayList r2 = r4.f4865a
            r3 = 0
            r2.add(r3)
        L37:
            char r2 = r5.c()
            switch(r2) {
                case 41: goto L5c;
                case 44: goto L52;
                case 59: goto L52;
                case 93: goto L5c;
                default: goto L3e;
            }
        L3e:
            java.lang.String r0 = "Expected a ',' or ']'"
            org.json.alipay.JSONException r0 = r5.a(r0)
            throw r0
        L45:
            r5.a()
            java.util.ArrayList r2 = r4.f4865a
            java.lang.Object r3 = r5.d()
            r2.add(r3)
            goto L37
        L52:
            char r2 = r5.c()
            if (r2 == r1) goto L14
            r5.a()
            goto L26
        L5c:
            if (r0 == r2) goto L14
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "Expected a '"
            r1.<init>(r2)
            java.lang.Character r2 = new java.lang.Character
            r2.<init>(r0)
            java.lang.StringBuilder r0 = r1.append(r2)
            java.lang.String r1 = "'"
            java.lang.StringBuilder r0 = r0.append(r1)
            java.lang.String r0 = r0.toString()
            org.json.alipay.JSONException r0 = r5.a(r0)
            throw r0
        */
        throw new UnsupportedOperationException("Method not decompiled: org.json.alipay.a.<init>(org.json.alipay.c):void");
    }

    private String a(String str) throws JSONException {
        int size = this.f4865a.size();
        StringBuffer stringBuffer = new StringBuffer();
        for (int i = 0; i < size; i++) {
            if (i > 0) {
                stringBuffer.append(str);
            }
            stringBuffer.append(b.a(this.f4865a.get(i)));
        }
        return stringBuffer.toString();
    }

    public final int a() {
        return this.f4865a.size();
    }

    public final Object a(int i) throws JSONException {
        Object obj = (i < 0 || i >= this.f4865a.size()) ? null : this.f4865a.get(i);
        if (obj == null) {
            throw new JSONException("JSONArray[" + i + "] not found.");
        }
        return obj;
    }

    public String toString() {
        try {
            return "[" + a(",") + ']';
        } catch (Exception e) {
            return null;
        }
    }
}
