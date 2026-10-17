// AUTO-GENERATED compile stub for the legacy bundled Apache HttpClient API.
// See org/apache/http/HttpEntity.java for the full explanation.

package org.apache.http.client.methods;

import org.apache.http.Header;
import org.apache.http.HttpRequest;

import java.net.URI;

@SuppressWarnings({"unused", "WeakerAccess", "SameParameterValue"})
public class HttpGet implements HttpUriRequest {

    /// HTTP method name, required by HttpRequest.
    private static final String METHOD_NAME = "GET";

    private final URI uri;

    public HttpGet(String url) {
        this.uri = URI.create(url);
    }

    public HttpGet(URI uri) {
        this.uri = uri;
    }

    @Override
    public String getMethod() { return METHOD_NAME; }

    @Override
    public URI getURI() { return uri; }

    @Override
    public void addHeader(String name, String value) { }

    @Override
    public void setHeader(String name, String value) { }

    @Override
    public Header[] getAllHeaders() { return new Header[0]; }

    @Override
    public Header getFirstHeader(String name) { return null; }

    @Override
    public boolean containsHeader(String name) { return false; }

    @Override
    public void abort() throws UnsupportedOperationException { }

    @Override
    public boolean isAborted() { return false; }

    public void releaseConnection() { }

    public void setHeader(Header header) { }
}
