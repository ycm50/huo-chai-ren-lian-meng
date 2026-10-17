cmake_minimum_required(VERSION 3.10)
project(cocos2dcpp CXX C)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fexceptions -frtti -Wno-deprecated-declarations -Wno-error=format-security -Wno-format-security -Wno-error=int-conversion -Wno-error=incompatible-pointer-types -Wno-error=c++11-narrowing -Wno-c++11-narrowing -Wno-narrowing")
add_compile_definitions(ANDROID USE_FILE32API CC_ENABLE_CHIPMUNK_INTEGRATION=1)
# --- libpng 1.6.2 (2026: 原版静态内嵌; prebuilt/libpng 只剩头文件, .a 已被删除) ---
# 必须排在 prebuilt/libpng 之前，保证 png 库与调用方使用同一套 png.h / pngconf.h /
# pnglibconf.h (已核实与 prebuilt 的 pnglibconf.h 逐字节一致)。
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/third_party/libpng)
set(LIBPNG_DIR ${CMAKE_CURRENT_SOURCE_DIR}/third_party/libpng)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/Classes)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/cocos2dx/actions)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/cocos2dx/base_nodes)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/cocos2dx/cocoa)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/cocos2dx/draw_nodes)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/cocos2dx/effects)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/cocos2dx/include)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/cocos2dx/kazmath/include/kazmath/GL)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/cocos2dx/kazmath/include/kazmath)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/cocos2dx/keypad_dispatcher)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/cocos2dx/label_nodes)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/cocos2dx/layers_scenes_transitions_nodes)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/cocos2dx/menu_nodes)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/cocos2dx/misc_nodes)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/cocos2dx/particle_nodes)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/cocos2dx/platform/android/jni)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/cocos2dx/platform/android)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/cocos2dx/platform/third_party/android/prebuilt/libcurl/include/curl)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/cocos2dx/platform/third_party/android/prebuilt/libjpeg/include)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/cocos2dx/platform/third_party/android/prebuilt/libpng/include)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/cocos2dx/platform/third_party/android/prebuilt/libtiff/include)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/cocos2dx/platform/third_party/android/prebuilt/libwebp/include)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/cocos2dx/platform)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/cocos2dx/script_support)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/cocos2dx/shaders)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/cocos2dx/sprite_nodes)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/cocos2dx/support/component)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/cocos2dx/support/data_support)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/cocos2dx/support/image_support)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/cocos2dx/support/tinyxml2)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/cocos2dx/support/user_default)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/cocos2dx/support/zip_support)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/cocos2dx/support)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/cocos2dx/textures)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/cocos2dx/text_input_node)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/cocos2dx/tilemap_parallax_nodes)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/cocos2dx/touch_dispatcher)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/cocos2dx)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/extensions/AssetsManager)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/extensions/CCBReader)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/extensions/CocoStudio/Action)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/extensions/CocoStudio/Armature/animation)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/extensions/CocoStudio/Armature/datas)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/extensions/CocoStudio/Armature/display)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/extensions/CocoStudio/Armature/external_tool)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/extensions/CocoStudio/Armature/physics)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/extensions/CocoStudio/Armature/utils)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/extensions/CocoStudio/Armature)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/extensions/CocoStudio/Components)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/extensions/CocoStudio/GUI/BaseClasses)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/extensions/CocoStudio/GUI/Layouts)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/extensions/CocoStudio/GUI/System)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/extensions/CocoStudio/GUI/UIWidgets/ScrollWidget)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/extensions/CocoStudio/GUI/UIWidgets)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/extensions/CocoStudio/Json/rapidjson/internal)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/extensions/CocoStudio/Json/rapidjson)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/extensions/CocoStudio/Json)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/extensions/CocoStudio/Reader)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/extensions/CocoStudio/Trigger)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/extensions/GUI/CCControlExtension)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/extensions/GUI/CCEditBox)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/extensions/GUI/CCScrollView)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/extensions/LocalStorage)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/extensions/network)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/extensions/physics_nodes)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/extensions/spine)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/extensions)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/CocosDenshion/android/jni)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/CocosDenshion/android/opensl/android)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/CocosDenshion/android/opensl/SLES)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/CocosDenshion/android/opensl)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/CocosDenshion/include)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/CocosDenshion/third_party/fmod/api/inc)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/CocosDenshion/third_party/fmod/lib64/api/inc)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/CocosDenshion/winrt)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/external/Box2D/Collision/Shapes)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/external/Box2D/Collision)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/external/Box2D/Common)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/external/Box2D/Dynamics/Contacts)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/external/Box2D/Dynamics/Joints)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/external/Box2D/Dynamics)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/external/Box2D/Rope)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/external/Box2D)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/external/chipmunk/include/chipmunk/constraints)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/external/chipmunk/include/chipmunk)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/external/chipmunk/src)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/external/libwebsockets/android/include)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/external/libwebsockets/ios/include)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/external/libwebsockets/tizen/include)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/external/libwebsockets/win32/include/win32helpers)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/external/libwebsockets/win32/include)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/external/sqlite3/include)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/cocos2dx/kazmath/include)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/cocos2dx/platform/third_party/android/prebuilt/libcurl/include)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/cocos2dx/platform/third_party/android/prebuilt/libjpeg)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/cocos2dx/platform/third_party/android/prebuilt/libpng)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/cocos2dx/platform/third_party/android/prebuilt/libtiff)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/cocos2dx/platform/third_party/android/prebuilt/libwebp)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/extensions/CocoStudio)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/extensions/CocoStudio/GUI)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/extensions/GUI)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/CocosDenshion/android)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/CocosDenshion)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/CocosDenshion/third_party/fmod/api)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/CocosDenshion/third_party/fmod/lib64/api)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/external)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/external/chipmunk/include)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/external/chipmunk)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/external/libwebsockets/android)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/external/libwebsockets/ios)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/external/libwebsockets/tizen)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/external/libwebsockets/win32)
include_directories(A:/Downloads/tat/DiabloLOL/app/src/main/cpp/full/cocos2d/external/sqlite3)
file(GLOB_RECURSE ENGINE_SRC cocos2d/cocos2dx/*.cpp cocos2d/extensions/*.cpp cocos2d/CocosDenshion/android/*.cpp)
list(REMOVE_ITEM ENGINE_SRC ${CMAKE_CURRENT_SOURCE_DIR})
file(GLOB_RECURSE C_SRC cocos2d/cocos2dx/*.c cocos2d/extensions/*.c cocos2d/external/*/*.c cocos2d/external/*/*/*.c)
list(FILTER C_SRC EXCLUDE REGEX "/platform/(blackberry|emscripten|linux|mac|ios|win32|winrt|wp8|tizen|marmalade|nacl|bada|qnx|proj\.)")
list(FILTER C_SRC EXCLUDE REGEX "/third_party/(blackberry|emscripten|linux|mac|ios|win32|winrt|wp8|tizen|marmalade|nacl|bada|qnx)")
list(FILTER C_SRC EXCLUDE REGEX "/platform/(marmalade|blackberry)")
list(REMOVE_DUPLICATES C_SRC)
file(GLOB GAME_SRC Classes/*.cpp)
list(REMOVE_ITEM GAME_SRC ${CMAKE_CURRENT_SOURCE_DIR}/Classes/_all_headers.cpp)
message(STATUS "engine=${ENGINE_SRC} ")
# 排除非 Android 平台源码
# 排除非 Android 平台源码 (前缀匹配)
list(FILTER ENGINE_SRC EXCLUDE REGEX "/platform/(blackberry|emscripten|linux|mac|ios|win32|winrt|wp8|tizen|marmalade|nacl|bada|qnx|proj\.)")
list(FILTER ENGINE_SRC EXCLUDE REGEX "/proj\.")
list(FILTER ENGINE_SRC EXCLUDE REGEX "/third_party/(blackberry|emscripten|linux|mac|ios|win32|winrt|wp8|tizen|marmalade|nacl|bada|qnx)")
list(LENGTH ENGINE_SRC N_ENG)
list(LENGTH GAME_SRC N_GAME)
message(STATUS "engine cpp=${N_ENG} game cpp=${N_GAME}")
# 临时排除尚不能编译的文件（详见 work/full-src/failed_cpp.txt）
set(EXCLUDE_CPP)  # 2026-10-15: 全部 4 个排除类已恢复进构建 — BLMissionManager(330->0) BLRole(390->0) BLYuanZhengMainPresenter(239->0) _free_simple(202->0)；替身符号已全部 weak，不会重复定义
foreach(x ${EXCLUDE_CPP})
  list(FILTER GAME_SRC EXCLUDE REGEX "/${x}$")
  list(FILTER ENGINE_SRC EXCLUDE REGEX "/${x}$")
endforeach()
set(DUP_ENGINE OpenSLEngine.cpp SimpleAudioEngineOpenSL.cpp)  # DUP_ENGINE
foreach(x ${DUP_ENGINE})
  list(FILTER GAME_SRC EXCLUDE REGEX "/${x}$")
endforeach()
list(REMOVE_DUPLICATES ENGINE_SRC)
list(REMOVE_DUPLICATES GAME_SRC)

# ------------------------------------------------------------
# SQLite 3.8.4.3 amalgamation (2026-10-15 恢复)
#   原版 libcocos2dcpp.so 静态内嵌了完整 SQLite（209 个 sqlite3_* 导出符号），
#   恢复出的工程里 cocos2d/external/sqlite3/ 只剩头文件，导致 ItemData.cpp 的
#   sqlite3_get_table/sqlite3_free_table 无定义 → dlopen 失败。
#   这里显式加入 amalgamation 源文件；不能用 file(GLOB) 的隐式命中，
#   因为 GLOB 在增量构建时不会因新文件出现而重新扫描。
#   注意: 不定义 SQLITE_HAS_CODEC（原版另有加密 codec，其源码未恢复；
#         定义后 sqlite3.c 会引用未定义的 sqlite3_key_v2/rekey_v2/activate_see）。
# ------------------------------------------------------------
set(COCOS2D_SQLITE3_C ${CMAKE_CURRENT_SOURCE_DIR}/cocos2d/external/sqlite3/sqlite3.c)
if(NOT EXISTS ${COCOS2D_SQLITE3_C})
  message(WARNING "sqlite3.c missing: ${COCOS2D_SQLITE3_C} — sqlite3_get_table will be undefined")
else()
  # 上面的 GLOB 只有在重新 configure 时才会扫到新文件；这里用 FIND 去重后追加，
  # 既保证「增量构建也一定编到」，又保证不会与 GLOB 结果重复（重复会让 ninja 报 multiple rules）。
  list(FIND C_SRC "${COCOS2D_SQLITE3_C}" _sqlite3_idx)
  if(_sqlite3_idx EQUAL -1)
    list(APPEND C_SRC ${COCOS2D_SQLITE3_C})
    message(STATUS "sqlite3: appended ${COCOS2D_SQLITE3_C}")
  else()
    message(STATUS "sqlite3: already in C_SRC via GLOB (index ${_sqlite3_idx})")
  endif()
endif()
list(LENGTH C_SRC _c_src_count)
message(STATUS "C_SRC file count = ${_c_src_count}")

# ------------------------------------------------------------
# libpng 1.6.2 (2026-10 恢复)
#   原版 libcocos2dcpp.so 静态内嵌了 libpng；恢复出的工程 prebuilt/libpng 下只剩
#   png.h/pngconf.h/pnglibconf.h，libpng.a 已被删除，于是 _missing.cpp 用 png_* 空桩
#   顶上 -> png_create_read_struct() 恒返回 0 -> CCImage::_initWithPngData() 失败。
#   这里把上游 libpng 1.6.2 的 png*.c 直接编进本库（pngtest.c/example.c 不编）。
#   zlib 由 target_link_libraries(... z ...) 提供。
# ------------------------------------------------------------
set(LIBPNG_SRC
  ${LIBPNG_DIR}/png.c
  ${LIBPNG_DIR}/pngerror.c
  ${LIBPNG_DIR}/pngget.c
  ${LIBPNG_DIR}/pngmem.c
  ${LIBPNG_DIR}/pngpread.c
  ${LIBPNG_DIR}/pngread.c
  ${LIBPNG_DIR}/pngrio.c
  ${LIBPNG_DIR}/pngrtran.c
  ${LIBPNG_DIR}/pngrutil.c
  ${LIBPNG_DIR}/pngset.c
  ${LIBPNG_DIR}/pngtrans.c
  ${LIBPNG_DIR}/pngwio.c
  ${LIBPNG_DIR}/pngwrite.c
  ${LIBPNG_DIR}/pngwtran.c
  ${LIBPNG_DIR}/pngwutil.c
)
list(LENGTH LIBPNG_SRC _libpng_count)
message(STATUS "libpng 1.6.2 sources = ${_libpng_count}")

add_library(cocos2dcpp SHARED ${ENGINE_SRC} ${C_SRC} ${GAME_SRC} ${LIBPNG_SRC})
# SYMBOL_HYGIENE (R89)：默认可见性会把整个引擎+游戏（96,198 个 dynsym）导出到进程全局符号表。
# 实测：libart.so 自己的**未定义符号**里有 51 个与我们的导出同名（全是 `tinyxml2::*`，因为 ART 也内嵌 tinyxml2），
# 动态链接器可能把 libart 的引用绑到**我们的** tinyxml2 实现 -> ART 内部状态错乱 -> 真机出现
# "Check failed: code != nullptr ... StringFactory.newStringFromBytes" 这类与业务无关的 abort。
# 改为 hidden，只保留显式导出的 JNI 入口（JNIEXPORT / Java_*）。
# 注意：不要用 CXX_VISIBILITY_PRESET hidden（编译期隐藏后，版本脚本也**无法**再放行那些
# 没写 JNIEXPORT 的 Java_* 入口 —— 实测 Java_* 会从 45 掉到 17）。
# 正确做法：**编译期保持默认可见性 + 链接期用版本脚本过滤**（下面那条 target_link_options），
# 这样 tinyxml2 等内部符号在 .dynsym 里变成 local（外部库再也绑不到），
# 而 Java_*/JNI_OnLoad 由版本脚本统一放行。# 用版本脚本把 Java_*/JNI_OnLoad 放行（45 个 JNI 入口不一定都带 JNIEXPORT），其余全部 local。
target_link_options(cocos2dcpp PRIVATE
    -Wl,--version-script=${CMAKE_CURRENT_SOURCE_DIR}/export_jni.map)
target_link_options(cocos2dcpp PRIVATE -Wl,--error-limit=0 -Wl,--allow-shlib-undefined -Wl,--unresolved-symbols=ignore-in-object-files)
target_link_libraries(cocos2dcpp log android GLESv2 EGL OpenSLES z m dl)









