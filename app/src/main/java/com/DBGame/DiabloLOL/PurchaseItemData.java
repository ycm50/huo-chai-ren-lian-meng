package com.DBGame.DiabloLOL;

/* loaded from: classes.dex */
public class PurchaseItemData {
    private String m_purchaseKey = null;
    private String m_purchaseId = null;

    PurchaseItemData() {
        System.out.println("### now create Purchase ###");
    }

    public void setPurchaseKey(String key) {
        this.m_purchaseKey = key;
    }

    public void setPurchaseId(String id) {
        this.m_purchaseId = id;
    }

    public String getPurchaseKey() {
        return this.m_purchaseKey;
    }

    public String getPurchaseId() {
        return this.m_purchaseId;
    }
}
