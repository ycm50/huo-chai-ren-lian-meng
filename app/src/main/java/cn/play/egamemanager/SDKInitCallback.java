// AUTO-GENERATED compile stub for cn.play.egamemanager.SDKInitCallback.
// Implemented anonymously in com.DBGame.DiabloLOL.DiabloLOL:
//   new SDKInitCallback() {
//       public void InitSucceed() { ... }
//       public void InitFailed(int arg0) { ... }
//   }

package cn.play.egamemanager;

@SuppressWarnings({"unused", "WeakerAccess"})
public interface SDKInitCallback {

    void InitSucceed();

    /// code carries the SDK's failure reason.
    void InitFailed(int code);
}
