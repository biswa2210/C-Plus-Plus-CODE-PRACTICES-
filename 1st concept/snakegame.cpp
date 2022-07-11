#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
HINSTANCE result;
result=ShellExecute(NULL,NULL,"e:\\snake",NULL ,NULL,SW_SHOWDEFAULT);
}
