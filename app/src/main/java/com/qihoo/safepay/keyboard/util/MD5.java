package com.qihoo.safepay.keyboard.util;

import java.security.MessageDigest;

// AUTO-GENERATED compile stub - see tools/gen_sdk_stubs.py
//
// The game only calls this to hash a string for the 360 safe-pay keyboard
// handshake, and the reconstructed sources never inspect the result, so a
// standard digest is sufficient here.
@SuppressWarnings({"unused", "WeakerAccess", "SameParameterValue"})
public class MD5 {

    public static final String TAG = "MD5";

    public static String getMD5(String str) {
        if (str == null) {
            return null;
        }
        try {
            MessageDigest digest = MessageDigest.getInstance("MD5");
            byte[] bytes = digest.digest(str.getBytes("UTF-8"));
            StringBuilder sb = new StringBuilder(bytes.length * 2);
            for (byte b : bytes) {
                sb.append(Character.forDigit((b >> 4) & 0xf, 16));
                sb.append(Character.forDigit(b & 0xf, 16));
            }
            return sb.toString();
        } catch (Exception e) {
            return null;
        }
    }
}
