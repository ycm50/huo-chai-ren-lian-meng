// AUTO-GENERATED compile stub for the Migu / China Mobile billing listener.
// Implemented anonymously in com.DBGame.DiabloLOL.DiabloLOL:
//   paySuccess(Map<String,String> params)
//   payFailed(Map<String,String> params, int code)
//   payCancel(Map<String,String> params)

package cn.egame.terminal.paysdk;

import java.util.Map;

@SuppressWarnings({"unused", "WeakerAccess"})
public interface EgamePayListener {

    void paySuccess(Map<String, String> params);

    void payCancel(Map<String, String> params);

    /// code carries the SDK's failure reason.
    void payFailed(Map<String, String> params, int code);
}
