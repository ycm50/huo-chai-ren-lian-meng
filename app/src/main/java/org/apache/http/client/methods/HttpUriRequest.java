// AUTO-GENERATED compile stub for the legacy bundled Apache HttpClient API.
// See org/apache/http/HttpEntity.java for the full explanation.
//
// The game code builds HttpGet instances and hands them to
// DefaultHttpClient.execute(HttpUriRequest), so HttpGet must implement the
// HttpUriRequest interface rather than merely HttpRequest.

package org.apache.http.client.methods;

import org.apache.http.HttpRequest;

@SuppressWarnings({"unused", "WeakerAccess"})
public interface HttpUriRequest extends HttpRequest {
    void abort() throws UnsupportedOperationException;

    boolean isAborted();
}
