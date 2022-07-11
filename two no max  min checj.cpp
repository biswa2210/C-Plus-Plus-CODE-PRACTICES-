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
int a,b;
cout<<"Enter the 1st number(integer)=";
cin>>a;
cout<<"Enter the 2nd number(integer)=";
cin>>b;
if(a==b)
cout<<"two numbers are equal";
else if(a>b)
cout<<"1st number is greater";
else if(a<b)
cout<<"2nd number is greater";
else
cout<<"not applicable";
getch();
return 0;
}


