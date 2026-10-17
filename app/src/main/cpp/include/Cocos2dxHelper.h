// ---------------------------------------------------------------------------
// org.cocos2dx.lib.Cocos2dxHelper - native side
//
// Reconstructed surface for the JNI entry points
//   Java_org_cocos2dx_lib_Cocos2dxHelper_nativeSetApkPath
//   Java_org_cocos2dx_lib_Cocos2dxHelper_nativeSetEditTextDialogResult
//
// In cocos2d-x 2.2.2 these live in cocos2dx/platform/android/
// CCApplication / CCFileUtils. The original .so exported 7044 cocos2d::
// symbols; only the pieces the Java layer actually calls are modelled here.
// ---------------------------------------------------------------------------
#ifndef COCOS2DX_HELPER_H_
#define COCOS2DX_HELPER_H_

#include <string>

namespace cocos2d {

class Cocos2dxHelper {
public:
    /// Records the APK path so the engine can open assets via the asset manager.
    /// Mirrors CCFileUtilsAndroid::setAssetManager / CCApplication::setApkPath.
    static void setApkPath(const std::string& apkPath);

    /// Receives the UTF-8 result of the native edit box dialog.
    /// Mirrors Cocos2dxHelper.setTextBoxResult on the engine side.
    static void setEditTextDialogResult(const std::string& text);

    /// The value last handed to setApkPath (empty until nativeSetApkPath runs).
    static const std::string& getApkPath();

    /// The value last handed to setEditTextDialogResult.
    static const std::string& getEditTextDialogResult();

private:
    static std::string s_apkPath;
    static std::string s_editTextDialogResult;
};

} // namespace cocos2d

#endif // COCOS2DX_HELPER_H_
