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
int i;
cout<<"PLEASE ENTER YOUR NAME= ";
gets(a);
a[0]=toupper(a[0]);
cout<<"UPDATED STRING IS= "<<a;
getch();
return 0;
}


