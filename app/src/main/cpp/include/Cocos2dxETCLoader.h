// ---------------------------------------------------------------------------
// org.cocos2dx.lib.Cocos2dxETCLoader - native side
//
// Reconstructed surface for
//   Java_org_cocos2dx_lib_Cocos2dxETCLoader_nativeSetTextureInfo
//
// ETC1 compressed textures are decompressed in Java (via the ETC1Util port in
// Cocos2dxETCLoader.java) and the decoded RGBA data is handed here to be
// registered with CCTextureCache. The engine-side helper is CCTextureETC,
// whose source path (CCTextureETC.cpp) is preserved in the original binary.
// ---------------------------------------------------------------------------
#ifndef COCOS2DX_ETCLOADER_H_
#define COCOS2DX_ETCLOADER_H_

#include <string>

namespace cocos2d {

class Cocos2dxETCLoader {
public:
    /// data holds the decoded RGBA bytes; length is the usable payload size.
    static void nativeSetTextureInfo(int width, int height,
                                     const std::string& data, int length);
};

} // namespace cocos2d

#endif // COCOS2DX_ETCLOADER_H_
