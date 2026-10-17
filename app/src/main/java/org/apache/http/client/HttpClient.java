// AUTO-GENERATED compile stub for the legacy bundled Apache HttpClient API.
// See org/apache/http/HttpEntity.java for the full explanation.

package org.apache.http.client;

import org.apache.http.HttpResponse;
import org.apache.http.client.methods.HttpUriRequest;

import java.io.IOException;

@SuppressWarnings({"unused", "WeakerAccess"})
public interface HttpClient {
    HttpResponse execute(HttpUriRequest request) throws IOException, ClientProtocolException;
}
