// AUTO-GENERATED compile stub for the legacy bundled Apache HttpClient API.
// See org/apache/http/HttpEntity.java for the full explanation.
//
// Used by WebActivity:
//   this.web.postUrl(sUrl, EncodingUtils.getBytes(postData, "BASE64"));

package org.apache.http.util;

import java.io.UnsupportedEncodingException;

@SuppressWarnings({"unused", "WeakerAccess"})
public final class EncodingUtils {

    private EncodingUtils() { }

    public static byte[] getBytes(String data, String charset) {
        try {
            return data.getBytes(charset);
        } catch (UnsupportedEncodingException e) {
            // Matches the legacy behaviour of falling back to the platform charset.
            return data.getBytes();
        }
    }

    public static String getString(byte[] data, String charset) {
        try {
            return new String(data, charset);
        } catch (UnsupportedEncodingException e) {
            return new String(data);
        }
    }
}
