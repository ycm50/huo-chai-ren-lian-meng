package com.DBGame.DiabloLOL;

import android.annotation.SuppressLint;
import android.content.Context;
import android.util.AttributeSet;
import android.view.KeyEvent;
import android.view.MotionEvent;
import android.view.View;
import android.widget.PopupWindow;

/* loaded from: classes.dex */
public class CmPopupWindow extends PopupWindow {
    public CmPopupWindow(Context context) {
        this(context, (AttributeSet) null, 0);
    }

    public CmPopupWindow(Context context, AttributeSet attrs, int defStyle) {
        this(context, attrs, defStyle, 0);
    }

    public CmPopupWindow() {
        this((View) null, 0, 0);
    }

    public CmPopupWindow(View contentView) {
        this(contentView, 0, 0);
    }

    public CmPopupWindow(int width, int height) {
        this((View) null, width, height);
    }

    public CmPopupWindow(View contentView, int width, int height) {
        this(contentView, width, height, false);
    }

    public CmPopupWindow(View contentView, int width, int height, boolean focusable) {
        super(contentView, width, height, focusable);
        setBackgroundDrawable(null);
        setInputMethodMode(1);
        setTouchable(true);
        setOutsideTouchable(true);
        contentView.setFocusableInTouchMode(true);
        setOutSideTouch(contentView);
        setAnimationStyle(R.style.menushow);
        update();
    }

    public CmPopupWindow(View contentView, int width, int height, boolean focusable, int animStyle) {
        super(contentView, width, height, focusable);
        setBackgroundDrawable(null);
        setInputMethodMode(1);
        setTouchable(true);
        setOutsideTouchable(true);
        contentView.setFocusableInTouchMode(true);
        setOutSideTouch(contentView);
        setAnimationStyle(animStyle);
        update();
    }

    private void setOutSideTouch(final View contentView) {
        contentView.setOnTouchListener(new View.OnTouchListener() { // from class: com.DBGame.DiabloLOL.CmPopupWindow.1
            @Override // android.view.View.OnTouchListener
            public boolean onTouch(View v, MotionEvent event) {
                switch (event.getAction()) {
                    case 0:
                        if (!CmPopupWindow.this.isInMenu(event.getX(), event.getY(), contentView)) {
                            CmPopupWindow.this.dismiss();
                            break;
                        }
                        break;
                }
                return false;
            }
        });
        contentView.setOnKeyListener(new View.OnKeyListener() { // from class: com.DBGame.DiabloLOL.CmPopupWindow.2
            @Override // android.view.View.OnKeyListener
            public boolean onKey(View v, int keyCode, KeyEvent event) {
                if ((keyCode != 82 && keyCode != 4) || event.getAction() != 0) {
                    return false;
                }
                if (CmPopupWindow.this.isShowing()) {
                    CmPopupWindow.this.dismiss();
                }
                return true;
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean isInMenu(float x, float y, View contentView) {
        return ((float) contentView.getLeft()) < x && ((float) contentView.getRight()) > x && ((float) contentView.getTop()) < y && ((float) contentView.getBottom()) > y;
    }

    @SuppressLint({"NewApi"})
    public CmPopupWindow(Context context, AttributeSet attrs, int defStyleAttr, int defStyleRes) {
        super(context, attrs, defStyleAttr, defStyleRes);
    }
}
