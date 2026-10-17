#pragma once
// 桩化类专用前置声明：补齐常见 JNI / 未解析类型
#include "bl_types.h"
#include <jni.h>
typedef struct _jstring _jstring;      typedef struct _jclass _jclass;
typedef struct _jobject _jobject;      typedef struct _jarray _jarray;
typedef struct _jmethodID _jmethodID;  typedef struct _jfieldID _jfieldID;
typedef struct _jbyteArray _jbyteArray; typedef struct _jobjectArray _jobjectArray;
typedef struct _JNIEnv JNIEnv;         typedef struct _JavaVM JavaVM;
typedef int umengJniMethodInfo_;       typedef int zcRankInfo;
