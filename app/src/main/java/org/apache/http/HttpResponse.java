// AUTO-GENERATED compile stub for the legacy bundled Apache HttpClient API.
// See org/apache/http/HttpEntity.java for the full explanation.

package org.apache.http;

@SuppressWarnings({"unused", "WeakerAccess"})
public interface HttpResponse extends HttpMessage {
    StatusLine getStatusLine();

    HttpEntity getEntity();
}
