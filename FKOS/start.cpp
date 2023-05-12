#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
int main(){
	keybd_event(VK_CONTROL,0,0,0);
	keybd_event(27,0,0,0);
	keybd_event(27,0,KEYEVENTF_KEYUP,0);
	keybd_event(VK_CONTROL,0,KEYEVENTF_KEYUP,0);
}
