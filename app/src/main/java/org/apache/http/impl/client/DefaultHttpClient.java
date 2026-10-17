// AUTO-GENERATED compile stub for the legacy bundled Apache HttpClient API.
// See org/apache/http/HttpEntity.java for the full explanation.
//
// DefaultHttpClient is the concrete client the game code instantiates:
//   DefaultHttpClient client = new DefaultHttpClient(new BasicHttpParams());
//   HttpResponse response = client.execute(getMethod);

package org.apache.http.impl.client;

import org.apache.http.HttpResponse;
import org.apache.http.client.HttpClient;
import org.apache.http.client.methods.HttpUriRequest;
import org.apache.http.params.BasicHttpParams;

import java.io.IOException;

@SuppressWarnings({"unused", "WeakerAccess"})
public class DefaultHttpClient implements HttpClient {

    public DefaultHttpClient() { }

    public DefaultHttpClient(BasicHttpParams params) { }

    @Override
    public HttpResponse execute(HttpUriRequest request) throws IOException {
        throw new UnsupportedOperationException(
                "Apache HttpClient stub: no HTTP is performed. "
                        + "See org/apache/http/HttpEntity.java");
    }
}
