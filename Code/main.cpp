#include "mainwindow.h"

#include <QApplication>

HHOOK hHook = NULL;

QString MainWindow::currentClick;

void UpdateKeyState(BYTE *keyState, int keycode){
    keyState[keycode] = GetKeyState(keycode);
}

LRESULT CALLBACK MyLowLevelKeyBoardProc(int nCode, WPARAM wParam, LPARAM lParam){

    //WPARAM is WM_KEYDOWN, WM_KEYUP, WM_SYSKEYDOWN, or WM_SYSKEYUP
    //LPARAM is the key information

    if(wParam == WM_KEYDOWN && lParam != VK_LMENU){

        //Get the key information

        KBDLLHOOKSTRUCT cKey = *((KBDLLHOOKSTRUCT*)lParam);

        wchar_t buffer[5];

        //get the keyboard state

        BYTE keyboard_state[256];
        GetKeyboardState(keyboard_state);
        UpdateKeyState(keyboard_state, VK_SHIFT);
        UpdateKeyState(keyboard_state, VK_CAPITAL); //caps
        UpdateKeyState(keyboard_state, VK_CONTROL); //ctrl
        UpdateKeyState(keyboard_state, VK_MENU); //alt

        //get the keyboard layout

        HKL keyboard_layout = GetKeyboardLayout(0);

        //get the name
        char lpszName[0x100] = {0};

        DWORD dwMsg = 1;
        dwMsg += cKey.scanCode << 16;
        dwMsg += cKey.flags << 24;

        int i = GetKeyNameText(dwMsg, (LPTSTR)lpszName, 255);

        //Try to convert the key info

        int result = ToUnicodeEx(cKey.vkCode, cKey.scanCode, keyboard_state, buffer, 4, 0, keyboard_layout);
        buffer[4] = L'\0';

        //Print the output

        qDebug()<< "key: " << cKey.vkCode << " " << QString::fromUtf16((ushort*)buffer) << " " << QString::fromUtf16((ushort*)lpszName);

        MainWindow::currentClick = QString::fromUtf16((ushort*)lpszName);

        //qDebug()<<"current click: "<<MainWindow::currentClick;
    }

    return CallNextHookEx(hHook, nCode, wParam, lParam);
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    hHook = SetWindowsHookEx(WH_KEYBOARD_LL, MyLowLevelKeyBoardProc, NULL, 0);
    if(hHook == NULL){
        qDebug()<<"hook failed";
    }

    MainWindow w;
    w.show();


    return a.exec();
}
