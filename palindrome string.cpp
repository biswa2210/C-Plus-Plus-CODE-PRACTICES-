#include<conio.h>
#include<string.h>
#include<windows.h>
#include<time.h>
#include<math.h>
#include<iostream>
using namespace std;
int main()
{
	char x[1000];
int i,len,j,f=0;
cout<<"ENTER YOUR NAME=";
gets(x);
len=strlen(x);
for(i=0,j=len-1;i<=j;i++,j--)
{
	if(x[i]!=x[j])
	{
		f=1;
		break;
	}
}
if(f==0)
{
	cout<<x<<"is pallindrome string";
}
else
{
		cout<<x<<" is not pallindrome string";
}
getch();
return 0;
}

