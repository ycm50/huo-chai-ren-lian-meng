// ---------------------------------------------------------------------------
// org.cocos2dx.lib.Cocos2dxAccelerometer - native side
//
// Reconstructed surface for
//   Java_org_cocos2dx_lib_Cocos2dxAccelerometer_onSensorChanged
//
// Mirrors cocos2d::CCAccelerometerDelegate dispatch: the Java SensorEventListener
// feeds raw accelerometer samples in, the engine converts them to
// CCAcceleration and forwards to the active delegate.
// ---------------------------------------------------------------------------
#ifndef COCOS2DX_ACCELEROMETER_H_
#define COCOS2DX_ACCELEROMETER_H_

namespace cocos2d {

class Cocos2dxAccelerometer {
public:
    /// x/y/z are in G, timestamp is nanoseconds as delivered by Android.
    static void onSensorChanged(float x, float y, float z, long long timestamp);
};

} // namespace cocos2d

#endif // COCOS2DX_ACCELEROMETER_H_
