// ---------------------------------------------------------------------------
// org.cocos2dx.lib.Cocos2dxBitmap - native side
//
// Reconstructed surface for
//   Java_org_cocos2dx_lib_Cocos2dxBitmap_nativeInitBitmapDC
//
// The Java layer renders text with android.graphics and hands the raw ARGB
// pixels back; the native side uploads them into the CCLabel/CCImage path.
// cocos2d::BitmapDC is one of the classes exported by the original .so.
// ---------------------------------------------------------------------------
#ifndef COCOS2DX_BITMAP_H_
#define COCOS2DX_BITMAP_H_

#include <string>

namespace cocos2d {

class Cocos2dxBitmap {
public:
    /// pixels holds width*height*4 bytes of ARGB data.
    static void nativeInitBitmapDC(int width, int height, const std::string& pixels);

    /// True once a bitmap has been handed in by the Java layer.
    static bool hasBitmap();

private:
    static bool s_hasBitmap;
    static int s_width;
    static int s_height;
};

} // namespace cocos2d

#endif // COCOS2DX_BITMAP_H_
