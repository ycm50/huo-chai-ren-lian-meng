// 自动生成：补齐 .so 的未定义符号（第三方库 TIFF/WebP 等 + 少量游戏函数）
// 目的: 使 dlopen 成功；函数体为占位（返回 0）
#include "bl_types.h"

extern "C" long long TIFFClientOpen(...) { return 0; }
extern "C" long long TIFFClose(...) { return 0; }
extern "C" long long TIFFGetField(...) { return 0; }
extern "C" long long TIFFReadRGBAImageOriented(...) { return 0; }
extern "C" long long WebPDecode(...) { return 0; }
extern "C" long long WebPGetFeaturesInternal(...) { return 0; }
extern "C" long long WebPInitDecoderConfigInternal(...) { return 0; }
extern "C" long long _TIFFfree(...) { return 0; }
extern "C" long long _TIFFmalloc(...) { return 0; }
extern "C" long long curl_easy_cleanup(...) { return 0; }
extern "C" long long curl_easy_getinfo(...) { return 0; }
extern "C" long long curl_easy_init(...) { return 0; }
extern "C" long long curl_easy_perform(...) { return 0; }
extern "C" long long curl_easy_setopt(...) { return 0; }
extern "C" long long curl_slist_append(...) { return 0; }
extern "C" long long curl_slist_free_all(...) { return 0; }
extern "C" long long ghidra_CONCAT14(...) { return 0; }
extern "C" long long ghidra_CONCAT15(...) { return 0; }
extern "C" long long ghidra_CONCAT16(...) { return 0; }
extern "C" long long jpeg_CreateCompress(...) { return 0; }
extern "C" long long jpeg_CreateDecompress(...) { return 0; }
extern "C" long long jpeg_destroy_compress(...) { return 0; }
extern "C" long long jpeg_destroy_decompress(...) { return 0; }
extern "C" long long jpeg_finish_compress(...) { return 0; }
extern "C" long long jpeg_mem_src(...) { return 0; }
extern "C" long long jpeg_read_header(...) { return 0; }
extern "C" long long jpeg_read_scanlines(...) { return 0; }
extern "C" long long jpeg_set_defaults(...) { return 0; }
extern "C" long long jpeg_start_compress(...) { return 0; }
extern "C" long long jpeg_start_decompress(...) { return 0; }
extern "C" long long jpeg_std_error(...) { return 0; }
extern "C" long long jpeg_stdio_dest(...) { return 0; }
extern "C" long long jpeg_write_scanlines(...) { return 0; }
extern "C" long long libwebsocket_callback_on_writable(...) { return 0; }
extern "C" long long libwebsocket_client_connect(...) { return 0; }
extern "C" long long libwebsocket_context_destroy(...) { return 0; }
extern "C" long long libwebsocket_context_user(...) { return 0; }
extern "C" long long libwebsocket_create_context(...) { return 0; }
extern "C" long long libwebsocket_get_internal_extensions(...) { return 0; }
extern "C" long long libwebsocket_service(...) { return 0; }
extern "C" long long libwebsocket_write(...) { return 0; }
extern "C" long long lws_frame_is_binary(...) { return 0; }
// --- png_* ---
// 2026: 真实 libpng 1.6.2 源码已编译进本库 (see third_party/libpng + full/CMakeLists.txt)。
//   这里不再提供 png_* 桩，否则会与 libpng 的目标文件重定义 (duplicate symbol -> link error)。
//   保留其余第三方库 (TIFF/WebP/curl/libwebsocket/jpeg) 的桩不动。
