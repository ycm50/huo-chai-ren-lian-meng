#pragma once
// umengJniHelper
// 基类: (无)
#include <jni.h>
// Ghidra 命名兼容: NDK jni.h 的类型别名
struct umengJniMethodInfo_ { JNIEnv *env; jclass classID; jmethodID methodID; };
#ifndef _JavaVM_defined
typedef JavaVM _JavaVM;
typedef JNIEnv _JNIEnv;

#endif
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class umengJniHelper {
public:
    _JavaVM* getJavaVM();
    void getJNIEnv(_JNIEnv**);
    void detachEnv();
    void globalDeInit();
    void setJavaVM(_JavaVM*);
    char const* getExternalAssetPath();
    void setExternalAssetPath(char const*);
    void getStaticMethodInfo(umengJniMethodInfo_&, _jclass*, char const*, char const*);
    void getMethodInfo(umengJniMethodInfo_&, _jclass*, char const*, char const*);
    undefined4 jstring2string(_jstring*);
};
