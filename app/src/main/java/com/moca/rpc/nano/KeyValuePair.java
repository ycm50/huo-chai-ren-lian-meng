// AUTO-GENERATED compile stub for com.moca.rpc.nano.KeyValuePair.
// The RPC event listeners read metadata via getKey()/getValue()
// (see com.DBGame.pk.LobbyListener and RoomListener).

package com.moca.rpc.nano;

@SuppressWarnings({"unused", "WeakerAccess", "SameParameterValue"})
public class KeyValuePair {

    public String key;
    public String value;

    public KeyValuePair() { }

    public KeyValuePair(String key, String value) {
        this.key = key;
        this.value = value;
    }

    public String getKey() { return key; }

    public String getValue() { return value; }

    public void setKey(String key) { this.key = key; }

    public void setValue(String value) { this.value = value; }
}
