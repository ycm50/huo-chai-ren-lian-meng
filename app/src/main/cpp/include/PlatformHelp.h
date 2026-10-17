// ---------------------------------------------------------------------------
// PlatformHelp - reconstructed platform SDK bridge
//
// PlatformHelp is one of the game's C++ classes (67 exported methods in the
// original libcocos2dcpp.so). It is the single funnel through which the C++
// game code reaches the Java platform SDKs: payments, login, share, exit,
// toasts and the native shield/loading layer.
//
// On the Java side it lands in com.DBGame.Common.BLHelper, which declares the
// native methods and raises the corresponding platform calls. The JNI bridge
// in src/jni_bridge.cpp enters here.
// ---------------------------------------------------------------------------
#ifndef PLATFORM_HELP_H_
#define PLATFORM_HELP_H_

#include <string>

namespace platform {

/// Where in the game a payment request originated.
enum PaySource {
    PAY_SOURCE_INDIVIDUAL = 1,  // BLHelper.PAY_INDUANXIN
    PAY_SOURCE_THIRD_PARTY = 2, // BLHelper.PAY_INTHIRDWAY
};

/// Platform-level operations the C++ game asks the Java layer to perform.
/// These mirror the static methods BLHelper exposes to the engine.
class PlatformHelp {
public:
    /// Human-readable platform/channel name for logging ("360", "migu", ...).
    static const char* platformName();

    /// Records the shield-layer message so showShieldLayer can replay it.
    static void setShieldMessage(const std::string& msg);
    static const std::string& getShieldMessage();

    /// Sound-effect flag, read back by the audio path.
    static void setSoundEffectEnabled(bool on);
    static bool isSoundEffectEnabled();

    /// True once the platform reported a successful login.
    static bool isConnected();
    static void setConnected(bool connected);

    /// Marks that a monthly subscription is active.
    static bool hasMonthlyContract();
    static void setMonthlyContract(bool active);

    /// Order id from the most recent successful purchase.
    static const std::string& lastOrderId();
    static void setLastOrderId(const std::string& orderId);

    /// Logs and consumes a data payload pushed from game code.
    static void dispatchData(const std::string& data);
};

} // namespace platform

#endif // PLATFORM_HELP_H_
