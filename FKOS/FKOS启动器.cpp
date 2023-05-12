#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
int main(){
	HWND hwnd = GetForegroundWindow();
	int cx = GetSystemMetrics(SM_CXSCREEN);           
	int cy = GetSystemMetrics(SM_CYSCREEN);           
	LONG l_WinStyle = GetWindowLong(hwnd,GWL_STYLE);  
	SetWindowLong(hwnd,GWL_STYLE,(l_WinStyle | WS_POPUP | WS_MAXIMIZE) & ~WS_CAPTION & ~WS_THICKFRAME & ~WS_BORDER);
	SetWindowPos(hwnd, HWND_TOP, 0, 0, cx, cy, 0);
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	cout<<"                                                                           ____\n";
	cout<<"                                                                         _|__  | FKOS 11Beta\n";
	cout<<"                                                                        | |__|_| 方块工作室\n";
	cout<<"                                                                        |____|  BLOCK STUDIO\n";
	system("start MyDock\\Mydock.exe");
	Sleep(4000);
	system("UI.exe 1");
    system("start yc.bat");
	system("start FKOS主程序.exe");
	Sleep(1000);
	return 0;
}
