package com.DBGame.Common;

import android.app.Dialog;
import android.content.Context;
import android.os.Bundle;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.Button;
import android.widget.TextView;
import com.DBGame.DiabloLOL.R;

/* loaded from: classes.dex */
public class EgameDialog extends Dialog {
    private ClickListenerInterface clickListenerInterface;
    public Context context;
    public String payName;
    public String payNum;

    public interface ClickListenerInterface {
        void doCancel();

        void doConfirm();
    }

    public EgameDialog(Context context) {
        super(context);
        this.context = context;
    }

    public EgameDialog(Context context, int theme, String payName, String payNum) {
        super(context, theme);
        this.context = context;
        this.payName = payName;
        this.payNum = payNum;
    }

    @Override // android.app.Dialog
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        init();
    }

    public void init() {
        LayoutInflater inflater = (LayoutInflater) this.context.getSystemService("layout_inflater");
        View view = inflater.inflate(R.layout.dialog_egame_layout, (ViewGroup) null);
        setContentView(view);
        TextView tvPayName = (TextView) view.findViewById(R.id.payname);
        TextView tvPayNum = (TextView) view.findViewById(R.id.paynum);
        tvPayName.setText(this.payName);
        tvPayNum.setText(this.payNum);
        Button btn_Ok = (Button) view.findViewById(R.id.btn_ok);
        Button btn_Cancel = (Button) view.findViewById(R.id.btn_close);
        btn_Ok.setOnClickListener(new clickListener());
        btn_Cancel.setOnClickListener(new clickListener());
    }

    public void setClicklistener(ClickListenerInterface clickListenerInterface) {
        this.clickListenerInterface = clickListenerInterface;
    }

    private class clickListener implements View.OnClickListener {
        private clickListener() {
        }

        @Override // android.view.View.OnClickListener
        public void onClick(View v) {
            int id = v.getId();
            switch (id) {
                case R.id.btn_close /* 2131427595 */:
                    EgameDialog.this.clickListenerInterface.doCancel();
                    break;
                case R.id.btn_ok /* 2131427599 */:
                    EgameDialog.this.clickListenerInterface.doConfirm();
                    break;
            }
        }
    }
}
