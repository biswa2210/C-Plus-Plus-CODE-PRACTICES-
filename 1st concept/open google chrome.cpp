#include <iostream>
#include <Windows.h>
#include<shellapi.h>
using namespace std;
int main()
{
   HWND hwnd = GetDesktopWindow();
    ShellExecuteA(hwnd, "open", "http://www.google.com", NULL, NULL, NULL);
    return 0;
}

