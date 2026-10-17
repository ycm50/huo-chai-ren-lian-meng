// ---------------------------------------------------------------------------
// org.apache.http - compile stubs
//
// Apache HttpClient (the legacy HttpClient 4.x API) was bundled with Android
// up to API 22 and removed in API 23. The decompiled game code (BLHelper,
// VersionUtil, WebActivity, HttpRequest) is written against that bundled copy.
//
// These stubs reproduce only the surface the reconstructed sources use, so
// they compile. They are NOT functional. To get working HTTP, either add
// `useLibrary 'org.apache.http.legacy'` to the android block in
// app/build.gradle, or replace the call sites with HttpURLConnection/OkHttp.
//
// AUTO-GENERATED - see tools/gen_support_stubs.py
// ---------------------------------------------------------------------------

package org.apache.http;

import java.io.InputStream;
import java.io.IOException;

@SuppressWarnings({"unused", "WeakerAccess", "SameParameterValue"})
public interface HttpEntity {
    InputStream getContent() throws IOException, IllegalStateException;

    long getContentLength();

    Header getContentType();

    boolean isStreaming();

    void consumeContent() throws IOException;
}
