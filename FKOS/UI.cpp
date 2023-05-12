#include <windows.h>
#include<bits/stdc++.h>
using namespace std;
int main(int argc, char** argv) {
	system("powershell -command \"& { $x = New-Object -ComObject Shell.Application; $x.minimizeall() }\"");
	string s, t = argv[1];
	if (t == "1") {
		Sleep(5000);
		HWND task;
		task=FindWindow("Shell_TrayWnd",NULL);
		ShowWindow(task,SW_HIDE);
		s = "C:\\FKOS\\UI.png";
	}
	if (t == "2") {
		Sleep(5000);
		HWND task;
		task=FindWindow("Shell_TrayWnd",NULL);
		ShowWindow(task,SW_HIDE);
		s = "C:\\FKOS\\start.png";
	}
	if (t == "3") {
		system("xs.bat");
		s = "C:\\FKOS\\ig.png";
	}
	SystemParametersInfo(SPI_SETDESKWALLPAPER, 0, (PVOID*)s.c_str(), SPIF_SENDCHANGE);
	return 0;
}
