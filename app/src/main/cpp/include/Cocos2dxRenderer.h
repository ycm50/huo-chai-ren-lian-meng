// ---------------------------------------------------------------------------
// org.cocos2dx.lib.Cocos2dxRenderer - native side
//
// Reconstructed surface for the 12 renderer JNI entry points:
//   nativeInit / nativeOnPause / nativeOnResume / nativeRender
//   nativeTouchesBegin / nativeTouchesEnd / nativeTouchesMove / nativeTouchesCancel
//   nativeKeyDown / nativeInsertText / nativeDeleteBackward / nativeGetContentText
//
// In the original build these forwarded to cocos2d::CCDirector and the
// touch/keypad dispatchers. The game logic itself lives in the 770 BL* classes
// under Classes/ (BLGameScene, BLMapScene, ...), which are not recoverable
// from the stripped binary; this header models the dispatch surface the
// bridge drives them through.
// ---------------------------------------------------------------------------
#ifndef COCOS2DX_RENDERER_H_
#define COCOS2DX_RENDERER_H_

#include <string>

namespace cocos2d {

class Cocos2dxRenderer {
public:
    /// Sets the framebuffer size and initialises the GL view + director.
    static void nativeInit(int width, int height);

    static void nativeOnPause();
    static void nativeOnResume();
    static void nativeRender();

    static void nativeTouchesBegin(int id, float x, float y);
    static void nativeTouchesEnd(int id, float x, float y);
    static void nativeTouchesMove(int id, float x, float y);
    static void nativeTouchesCancel(int id, float x, float y);

    /// Returns true when the key event was consumed by the engine.
    static bool nativeKeyDown(int keyCode);

    static void nativeInsertText(const std::string& text);
    static void nativeDeleteBackward();
    static std::string nativeGetContentText();

    /// Screen size last passed to nativeInit.
    static int getScreenWidth();
    static int getScreenHeight();

private:
    static int s_screenWidth;
    static int s_screenHeight;
    static std::string s_contentText;
};

} // namespace cocos2d

#endif // COCOS2DX_RENDERER_H_
