#include<windows.h>
#include<math.h>
#include<time.h>
#include<string.h>
#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
system("color a");
system("title BISWA");
system("mode 1000");
char a[100000];
cout<<"Please Enter Your Name=";
gets(a);
strrev(a);
cout<<"updated reverse string="<<a;
getch();
return 0;
}


