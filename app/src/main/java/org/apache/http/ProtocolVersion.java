// AUTO-GENERATED compile stub for the legacy bundled Apache HttpClient API.
// See org/apache/http/HttpEntity.java for the full explanation.

package org.apache.http;

@SuppressWarnings({"unused", "WeakerAccess"})
public class ProtocolVersion {
    private final String protocol;
    private final int major;
    private final int minor;

    public ProtocolVersion(String protocol, int major, int minor) {
        this.protocol = protocol;
        this.major = major;
        this.minor = minor;
    }

    public String getProtocol() { return protocol; }

    public int getMajor() { return major; }

    public int getMinor() { return minor; }

    @Override
    public String toString() {
        return protocol + "/" + major + "." + minor;
    }
}
