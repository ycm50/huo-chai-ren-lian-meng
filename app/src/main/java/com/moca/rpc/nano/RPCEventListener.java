// AUTO-GENERATED compile stub for the Moca RPC layer (com.moca.rpc.nano).
//
// Reconstructed from the call sites in com.DBGame.pk:
//   LobbyListener / RoomListener `implements RPCEventListener` and override the
//   onConnected / onDisconnected / onError / onEstablished / onPayload /
//   onRequest callbacks.
//
// The real implementation ships as libmocarpc_nano_jni.so (see jniLibs).

package com.moca.rpc.nano;

import java.io.InputStream;

@SuppressWarnings({"unused", "WeakerAccess"})
public interface RPCEventListener {

    /// Fired once the RPC channel connects.
    void onConnected(RPC rpc);

    /// Fired when the channel drops.
    void onDisconnected(RPC rpc);

    /// Fired when the channel reports an error.
    void onError(RPC rpc, Throwable error);

    /// Fired once the session is established and usable.
    void onEstablished(RPC rpc);

    /// Inbound payload: raw bytes plus a flag marking the final fragment.
    void onPayload(RPC rpc, long length, InputStream payload, boolean isLast);

    /// Inbound request: a header/metadata table plus the request code.
    void onRequest(RPC rpc, long length, int requestCode, KeyValuePair[] extra, int flags);

    /// Inbound response to a previously issued request.
    void onResponse(RPC rpc, long length, int requestCode, KeyValuePair[] extra, int flags);
}
