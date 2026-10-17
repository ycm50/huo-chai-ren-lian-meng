// AUTO-GENERATED compile stub for the 360 game-center SDK user info.
// Signatures derived from the call sites in com.DBGame.DiabloLOL.DiabloLOL.

package com.qihoo.gamecenter.sdk.demosp.utils;

@SuppressWarnings({"unused", "WeakerAccess", "SameParameterValue"})
public class QihooUserInfo {

    private String id;
    private String name;

    /// DiabloLOL: userInfo.isValid()
    public boolean isValid() { return id != null && !id.isEmpty(); }

    /// DiabloLOL: userInfo.getId()
    public String getId() { return id; }

    /// DiabloLOL: userInfo.getName()
    public String getName() { return name; }

    public void setId(String id) { this.id = id; }

    public void setName(String name) { this.name = name; }
}
