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
int i,a,l=1;
cout<<"enter the no=";
cin>>a;
if(a!=0)
{
for(i=1;i<=a;i++)
{
l=l*i;
cout<<"*"<<i;
}
cout<<"="<<l;
}
else if(a==0)
{
	cout<<a<<"!=1";
}
else if(a<0)
{
cout<<"this no is not applicable";
}
getch();
return 0;
}


