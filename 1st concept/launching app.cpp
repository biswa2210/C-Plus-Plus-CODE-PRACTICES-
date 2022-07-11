#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
HINSTANCE result;
result=ShellExecute(NULL,NULL,"c:\\ProgramData\\Microsoft\\Windows\\Start Menu\\Programs\\Accessories\\calculator",NULL ,NULL,SW_SHOWDEFAULT);
return 0;
}
