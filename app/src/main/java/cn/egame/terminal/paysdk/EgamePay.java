// AUTO-GENERATED compile stub for the Migu / China Mobile billing SDK.
// Signatures derived from the call sites in com.DBGame.DiabloLOL.DiabloLOL:
//   EgamePay.init(context)
//   EgamePay.PAY_PARAMS_KEY_TOOLS_ALIAS
//   new EgamePay(payParams, listener)      // via GameManager.EGamePay(...)
//   EgamePayListener callbacks

package cn.egame.terminal.paysdk;

import android.content.Context;
import java.util.HashMap;

@SuppressWarnings({"unused", "WeakerAccess", "SameParameterValue"})
public class EgamePay {

    public static final String PAY_PARAMS_KEY_TOOLS_ALIAS = "toolsAlias";

    public EgamePay() { }

    public EgamePay(HashMap<String, String> payParams, EgamePayListener listener) { }

    public static void init(Context context) { }

    /// Starts a billing flow; the SDK reports back through the listener.
    public void pay(Context context, HashMap<String, String> payParams, EgamePayListener listener) { }
}
