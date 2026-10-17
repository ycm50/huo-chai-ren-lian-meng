package com.DBGame.DiabloLOL;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.net.URL;
import java.net.URLConnection;
import java.util.List;
import java.util.Map;

/* loaded from: classes.dex */
public class HttpRequest {
    public static String sendGet(String url, String param) {
        Exception e = null;
        Throwable th = null;
        String result = "";
        BufferedReader in = null;
        try {
            try {
                String urlNameString = url + "?" + param;
                URL realUrl = new URL(urlNameString);
                URLConnection connection = realUrl.openConnection();
                connection.setRequestProperty("accept", "*/*");
                connection.setRequestProperty("connection", "Keep-Alive");
                connection.setRequestProperty("user-agent", "Mozilla/4.0 (compatible; MSIE 6.0; Windows NT 5.1;SV1)");
                connection.connect();
                Map<String, List<String>> map = connection.getHeaderFields();
                for (String key : map.keySet()) {
                    System.out.println(key + "--->" + map.get(key));
                }
                BufferedReader in2 = new BufferedReader(new InputStreamReader(connection.getInputStream()));
                while (true) {
                    try {
                        String line = in2.readLine();
                        if (line == null) {
                            break;
                        }
                        result = result + line;
                    } catch (Exception __jc_e) {
                        in = in2;
                        System.out.println("发送GET请求出现异常！" + __jc_e);
                        __jc_e.printStackTrace();
                        if (in != null) {
                            try {
                                in.close();
                            } catch (Exception e2) {
                                e2.printStackTrace();
                            }
                        }
                        return result;
                    } catch (Throwable __jc_th) {
                        in = in2;
                        if (in != null) {
                            try {
                                in.close();
                            } catch (Exception e22) {
                                e22.printStackTrace();
                            }
                        }
                        throw __jc_th;
                    }
                }
                if (in2 != null) {
                    try {
                        in2.close();
                    } catch (Exception e23) {
                        e23.printStackTrace();
                    }
                }
            } catch (Throwable th2) {
                th = th2;
            }
        } catch (Exception e3) {
            e = e3;
        }
        return result;
    }

    public static String sendPost(String url, String param) {
        Exception e = null;
        Throwable th = null;
        PrintWriter out = null;
        BufferedReader in = null;
        String result = "";
        try {
            try {
                URL realUrl = new URL(url);
                URLConnection conn = realUrl.openConnection();
                conn.setRequestProperty("accept", "*/*");
                conn.setRequestProperty("connection", "Keep-Alive");
                conn.setRequestProperty("user-agent", "Mozilla/4.0 (compatible; MSIE 6.0; Windows NT 5.1;SV1)");
                conn.setDoOutput(true);
                conn.setDoInput(true);
                PrintWriter out2 = new PrintWriter(conn.getOutputStream());
                try {
                    out2.print(param);
                    out2.flush();
                    BufferedReader in2 = new BufferedReader(new InputStreamReader(conn.getInputStream()));
                    while (true) {
                        try {
                            String line = in2.readLine();
                            if (line == null) {
                                break;
                            }
                            result = result + line;
                        } catch (Exception __jc_e) {
                            in = in2;
                            out = out2;
                            System.out.println("发送 POST 请求出现异常！" + __jc_e);
                            __jc_e.printStackTrace();
                            if (out != null) {
                                try {
                                    out.close();
                                } catch (Exception ex) {
                                    ex.printStackTrace();
                                }
                            }
                            if (in != null) {
                                in.close();
                            }
                            return result;
                        } catch (Throwable __jc_th) {
                            in = in2;
                            out = out2;
                            if (out != null) {
                                try {
                                    out.close();
                                } catch (Exception ex2) {
                                    ex2.printStackTrace();
                                    throw __jc_th;
                                }
                            }
                            if (in != null) {
                                in.close();
                            }
                            throw __jc_th;
                        }
                    }
                    if (out2 != null) {
                        try {
                            out2.close();
                        } catch (Exception ex3) {
                            ex3.printStackTrace();
                        }
                    }
                    if (in2 != null) {
                        in2.close();
                    }
                } catch (Exception e2) {
                    e = e2;
                    out = out2;
                } catch (Throwable th2) {
                    th = th2;
                    out = out2;
                }
            } catch (Exception e3) {
                e = e3;
            }
            return result;
        } catch (Throwable th3) {
            th = th3;
        }
        return result;
    }
}
