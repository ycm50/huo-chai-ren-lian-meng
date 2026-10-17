// AUTO-GENERATED compile stub for cn.play.egamemanager.
// Signatures derived from the call sites in com.DBGame.DiabloLOL.DiabloLOL:
//   this.gameManager = GameManager.getInstantce();
//   this.gameManager.init(this);
//   this.gameManager.EGamePay(payParams, listener);
//   this.gameManager.gameConfig.PaySdkUIForCP = 1;

package cn.play.egamemanager;

import android.app.Activity;
import java.util.HashMap;
import cn.egame.terminal.paysdk.EgamePayListener;

@SuppressWarnings({"unused", "WeakerAccess", "SameParameterValue"})
public class GameManager {

    /// SDK-side configuration flags the game writes before a payment.
    public GameConfig gameConfig = new GameConfig();

    private static GameManager sInstance;

    public static GameManager getInstantce() {
        if (sInstance == null) {
            sInstance = new GameManager();
        }
        return sInstance;
    }

    public void init(Activity activity) { }

    public void init(Activity activity, SDKInitCallback callback) { }

    /// Starts the Migu billing flow for the given parameters.
    public void EGamePay(HashMap<String, String> payParams, EgamePayListener listener) { }

    public void exit(Activity activity) { }

    public static class GameConfig {
        /// Which SDK payment UI the client should present for the CP.
        public int PaySdkUIForCP;

        public int autoLogin;
    }
}
