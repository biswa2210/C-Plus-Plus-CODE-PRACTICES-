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
int n,i,rem=0,f=0;;
cout<<"Enter the no=";
cin>>n;
for(;n>0;n=n/10)
{
	rem=n%10;
	if(rem%2==0)
	{
		f=1;
	}
	else
	{
		f=0;
		break;
	}
}
if(f==1)
cout<<"even series";
else
cout<<"not even series";
getch();
return 0;
}


