cmake_minimum_required(VERSION 3.22.1)
project(cocos2dcpp CXX C)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# ---------------------------------------------------------------------------
# Reconstructed native layer for DiabloLOL (火柴人联盟).
#
# The original APK shipped a stripped, 11.8 MB libcocos2dcpp.so built from
# cocos2d-x 2.2.2. Its original source tree was:
#
#   /Users/hoolai/Documents/projects/lol_hulai/cocos2d/
#       cocos2dx/...                        (engine, 58 .cpp files)
#       extensions/{CCBReader,CocoStudio,GUI,network,spine,physics_nodes}
#       projects/DiabloLOL/Classes/...      (game code, 22 .cpp files)
#       projects/DiabloLOL/proj.android_RongHe/jni/   (this directory)
#
# The engine and the game's own C++ classes are re-supplied here as headers
# (see include/) plus the JNI bridge that the Java layer actually calls.
# The bridge is ABI-compatible with the 45 Java_* symbols exported by the
# original .so.
# ---------------------------------------------------------------------------

include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

# --- JNI bridge -------------------------------------------------------------
# jni_bridge.cpp implements every Java_* entry point the reconstructed Java
# layer declares; native_impl.cpp backs it with the engine/platform surface
# those entry points forward into (see include/).
add_library(cocos2dcpp SHARED
    src/jni_bridge.cpp
    src/native_impl.cpp
)

target_link_libraries(cocos2dcpp
    android
    log
    GLESv1_CM
    GLESv2
    z
    m
)

# The original library was built without a version script, exporting all
# Java_* symbols plus the engine's C++ symbols. Keep the JNI entry points
# visible so System.loadLibrary + RegisterNatives/by-name lookup works.
set_target_properties(cocos2dcpp PROPERTIES
    CXX_VISIBILITY_PRESET default
    VISIBILITY_INLINES_HIDDEN OFF
)

# --- hybrid patch library (goal change, see PROGRESS R227) -------------------
# Loaded BEFORE libcocos2dcpp.so by the Java layer; defines only the few functions
# we verified, and resolves the original's symbols lazily via dlopen/dlsym.
add_library(patch SHARED patch/patch_functions.cpp)
target_link_libraries(patch log dl)
