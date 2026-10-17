// AUTO-GENERATED compile stub for com.qihoopp.qcoinpay.main.PayAct.
//
// com.DBGame.DiabloLOL.DiabloLOL compares the billing result against the
// constants on the static field PayAct.c:
//   !PayAct.c.f4509b.equals(result) && PayAct.c.c.equals(result)

package com.qihoopp.qcoinpay.main;

@SuppressWarnings({"unused", "WeakerAccess", "SameParameterValue"})
public class PayAct {

    /// Static result-code table consulted by the game's pay callback.
    public static final Result c = new Result();

    public static class Result {
        /// Result string marking a cancelled payment.
        public final String f4509b = "cancel";

        /// Result string marking a failed payment. Declared as String because
        /// DiabloLOL calls c.equals(result) on it.
        public final String c = "fail";
    }
}
