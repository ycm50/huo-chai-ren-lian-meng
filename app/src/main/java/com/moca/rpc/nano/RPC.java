// AUTO-GENERATED compile stub for the Moca RPC layer (com.moca.rpc.nano).
//
// Reconstructed from the call sites in com.DBGame.pk.MatchVSManager:
//   RPC.builder().connect(url).listener(listener).build()
//
// The real implementation ships as libmocarpc_nano_jni.so (see jniLibs); this
// stub reproduces the fluent builder surface the game code uses.

package com.moca.rpc.nano;

import java.io.IOException;
import java.io.OutputStream;
import java.net.UnknownHostException;

@SuppressWarnings({"unused", "WeakerAccess", "SameParameterValue"})
public class RPC {

    private final String address;
    private final RPCEventListener listener;

    private RPC(String address, RPCEventListener listener) {
        this.address = address;
        this.listener = listener;
    }

    public static Builder builder() {
        return new Builder();
    }

    public String getAddress() { return address; }

    public RPCEventListener getListener() { return listener; }

    /// Opens the channel and starts the receive loop. Declared to throw
    /// IOException because MatchVSManager catches UnknownHostException around
    /// the builder call.
    public void loop() throws IOException { }

    /// Stops the receive loop without tearing the channel down.
    public void breakLoop() { }

    public void close() { }

    /// Issues a request over the channel; code selects the operation and
    /// params carries its payload.
    public void request(int code, java.util.Map<String, String> params) { }

    public void send(byte[] payload) { }

    public java.io.OutputStream openStream() { return null; }

    @SuppressWarnings("unchecked")
    public static class Builder {
        private String address;
        private RPCEventListener listener;

        public Builder connect(String address) {
            this.address = address;
            return this;
        }

        public Builder listener(RPCEventListener listener) {
            this.listener = listener;
            return this;
        }

        /// Resolves the address and opens the channel. Declared to throw
        /// UnknownHostException because MatchVSManager catches it around the
        /// builder chain (see initLobbyRpc / initRoomRpc).
        public RPC build() throws UnknownHostException {
            return new RPC(address, listener);
        }
    }
}
