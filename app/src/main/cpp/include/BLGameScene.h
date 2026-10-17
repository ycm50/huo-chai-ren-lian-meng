// ---------------------------------------------------------------------------
// BLGameScene - reconstructed game scene bridge
//
// BLGameScene is one of the largest game C++ classes in the original library
// (78 exported methods: enterMission, enterArena, enterChallenge, enterTreasure,
// enterMoneyTree, runSharkAction, shareGameScene, requestVip, ...). It is the
// hub through which the Java layer's BLHelper calls reach the game.
//
// Source path in the original build:
//   Classes/ui/... (see analysis/game_cpp_paths.txt)
//
// Only the entry points the JNI bridge needs are declared here; the full
// 770-type surface is catalogued in the project README.
// ---------------------------------------------------------------------------
#ifndef BL_GAME_SCENE_H_
#define BL_GAME_SCENE_H_

#include <string>

// ---------------------------------------------------------------------------
// com.DBGame.Common.BLHelper <-> native game logic
//
// These correspond 1:1 to the Java_com_DBGame_Common_BLHelper_* exports.
// ---------------------------------------------------------------------------

/// Payment finished for orderId; amount is the charged value in the game's
/// smallest unit. Reaches BLGameScene::requestVip / the shop flow.
void BLHelper_buyComplete(const std::string& orderId, int amount);

/// Payment aborted or rejected.
void BLHelper_buyFailed();

/// Payment succeeded for amount.
void BLHelper_buySucess(int amount);

/// Dismisses the native shield/loading layer shown over the GL surface.
void BLHelper_closeShieldLayer();

/// The SDK reported a successful login/connection.
void BLHelper_connectSuccess();

/// Requests the engine shut the app down cleanly.
void BLHelper_exitGame();

/// Monthly-contract (订阅) purchase result.
void BLHelper_onMonthlyContractPurchased(bool purchased);

/// Payload pushed from game code into the native game logic.
void BLHelper_receiveData(const std::string& data);

/// Asks the game to save the current frame to the gallery.
void BLHelper_savePicture();

/// Enables/disables sound effects.
void BLHelper_setSoundEffectStatue(bool on);

/// Shows the native shield layer, optionally with a message.
void BLHelper_showShieldLayer(const std::string& msg);

/// Displays a native toast.
void BLHelper_toastMsg(const std::string& msg);

/// The game's web view finished / should close.
void BLHelper_webout();

/// Exported by the original .so; no matching Java declaration remains.
void BLHelper_sendReward();

// ---------------------------------------------------------------------------
// com.DBGame.Common.OGWebView <-> native web view bridge
// ---------------------------------------------------------------------------

void OGWebView_OnshouldOverrideUrlLoading(const std::string& url);

void OGWebView_quitWeb();

/// Returns true when the native side claims the URL.
bool OGWebView_onRequestURL(const std::string& url);

// ---------------------------------------------------------------------------
// com.DBGame.pk.MatchVSHelper <-> native match/VS networking
//
// Backed by com.moca.rpc.nano (the Moca RPC layer) in the original build;
// see libmocarpc_nano_jni.so in jniLibs.
// ---------------------------------------------------------------------------

void MatchVSHelper_loginFail();
void MatchVSHelper_loginSuccess();
void MatchVSHelper_onDisconnect();
void MatchVSHelper_onEnterLobby();
void MatchVSHelper_onExitLobby();
void MatchVSHelper_onFriendDisconnect();
void MatchVSHelper_onGameReady();
void MatchVSHelper_onGameStart(bool started);
void MatchVSHelper_receiveData(const std::string& data);
void MatchVSHelper_setInfo(const std::string& info);

#endif // BL_GAME_SCENE_H_
