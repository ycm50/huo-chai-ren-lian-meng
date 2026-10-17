cmake_minimum_required(VERSION 3.22.1)
project(patch CXX C)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
# Hybrid patch library: export ONLY the explicitly-marked functions.
add_library(patch SHARED patch_functions.cpp)
target_link_libraries(patch log dl)
target_compile_options(patch PRIVATE -fvisibility=hidden -fvisibility-inlines-hidden)
# hide symbols pulled in from static libs (libc++/libc++abi) so we do NOT preempt the original's
target_link_options(patch PRIVATE -Wl,--exclude-libs,ALL)
