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
char x[50000];
int len,i;
cout<<"ENTER YOUR  FIRST NAME=";
gets(x);
len=strlen(x);
cout<<"YOUR NAME LENGTH IS="<<len<<endl;
for(i=0;i<=len;i++)
{
cout<<x[i]<<endl;
}

getch();
return 0;
}


