#include<bits/stdc++.h>
#include<conio.h>
#include<windows.h>
#include <Tlhelp32.h>
using namespace std;
#define N 21
int n;
string a, s;
HWND h = GetForegroundWindow();
void down(int &n, int &m) {
	#define KEY_DOWN(VK_NONAME) ((GetAsyncKeyState(VK_NONAME) & 0x8000) ? 1:0)
	HANDLE hStdin = GetStdHandle(STD_INPUT_HANDLE);
	DWORD mode;
	GetConsoleMode(hStdin, &mode);
	mode &= ~ENABLE_QUICK_EDIT_MODE;
	SetConsoleMode(hStdin, mode);
	if (KEY_DOWN(VK_LBUTTON)) {
		POINT p;
		GetCursorPos(&p);
		ScreenToClient(h, &p);
		n = p.x;
		m = p.y;
	}
}
void colorout(auto s, int front_color, int back_color) {
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(handle, BACKGROUND_INTENSITY | back_color * 16 | FOREGROUND_INTENSITY | front_color);
	cout << s;
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | 7);
}
char *StringToChar(const string &object) {
	char *result = (char *) object.data();
	return result;
}

void AutoRun(const string &RegName) {
	string temp = R"(REG ADD HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\Windows\CurrentVersion\Run /v )";
	const string &autorunName = RegName;
}
void full_screen() {
	HWND hwnd = GetForegroundWindow();
	int cx = GetSystemMetrics(SM_CXSCREEN);
	int cy = GetSystemMetrics(SM_CYSCREEN);

	LONG l_WinStyle = GetWindowLong(hwnd, GWL_STYLE);
	SetWindowLong(hwnd, GWL_STYLE, (l_WinStyle | WS_POPUP | WS_MAXIMIZE) & ~WS_CAPTION & ~WS_THICKFRAME & ~WS_BORDER);

	SetWindowPos(hwnd, HWND_TOP, 0, 0, cx, cy, 0);
}

void O() 
{
	HWND hwnd = GetConsoleWindow();
	LONG Style;	//窗口风格
	Style = GetWindowLong(hwnd, GWL_STYLE);	 // 得到窗口风格   
	Style = Style & ~WS_CAPTION;			 //去掉标题栏
	SetWindowLong(hwnd, GWL_STYLE, Style);	
}

int main() {
	char title[100];
	HWND hwnd;
	GetConsoleTitle(title,100);
	hwnd=FindWindow(NULL,title);
	MoveWindow(hwnd,520,0,300,300,TRUE);
	HWND hWnd = ::GetForegroundWindow();
	::SetWindowPos(hWnd, HWND_TOPMOST, 0, 0, 100, 100, SWP_NOMOVE | SWP_NOSIZE);
	O();
	system("mode con cols=30 lines=1");
	cout<<"fkos [X] v1";
	Sleep(1000);
	int x=0,y=0,cen=0;
	while(1){
		down(x,y);
		cout<<"x:"<<x<<" y:"<<y;
		if(x>(-515) and x<(-420) and y>745 and y<785){
			system("start start.exe");
			x=0,y=0; 
			Sleep(1000);
		}
		if(x>494 and y>756 and x<742 and y<791){
			system("start about.pyw");
		}
		Sleep(100);
		system("cls");
	}
	return 0;
}
