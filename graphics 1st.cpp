#include<conio.h>
#include<graphics.h>
#include<iostream>
using namespace std;
int main()
{
int gdriver=DETECT,gmode;
initgraph(&gdriver,&gmode,"C:\TC\BGI");
circle(20,15,30);
getch();
closegraph();
return 0;
}
