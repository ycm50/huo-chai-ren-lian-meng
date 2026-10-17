// AUTO-GENERATED compile stub for the Migu / China Mobile billing SDK.
// Signatures derived from the call sites in com.DBGame.DiabloLOL.DiabloLOL.

package cn.cmgame.billing.api;

import android.app.Activity;
import java.util.HashMap;

@SuppressWarnings({"unused", "WeakerAccess", "SameParameterValue"})
public class GameInterface {

    /// Implemented anonymously in DiabloLOL:
    ///   public void onResult(int resultCode, String billingIndex, Object obj)
    public interface IPayCallback {
        void onResult(int resultCode, String billingIndex, Object obj);
    }

    /// DiabloLOL: GameInterface.initializeApp(this, (String) null, (ILoginCallback) null)
    public static void initializeApp(Activity activity, String appId, ILoginCallback loginCallback) { }

    public interface ILoginCallback {
        void onSuccess(String accountId);

        void onFail(int code, String msg);
    }

    /// DiabloLOL.payInYidong():
    ///   GameInterface.doBilling(this, true, true, PAY_CODE_MM[idx], null, payCallback)
    public static void doBilling(Activity activity, boolean isPayOnce, boolean isLandscape,
                                 String billingIndex, String extra, IPayCallback callback) { }

    /// Implemented anonymously in DiabloLOL:
    ///   public void onConfirmExit() / public void onCancelExit()
    public interface GameExitCallback {
        void onConfirmExit();

        void onCancelExit();
    }

    /// DiabloLOL: GameInterface.exit(this, new GameExitCallback() { ... })
    public static void exit(Activity activity, GameExitCallback exitCallback) { }
}
