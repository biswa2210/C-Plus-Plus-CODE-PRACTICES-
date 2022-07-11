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
int n,s=0,r,p,q=0,t,w=0,f,e=0;
cout<<"CHEAK MAGIC NUMBER(MAXIMUM FOUR DIGITS NUMBERS)\n";
cout<<"***********************************************************\n";
cout<<"Enter the number=";
cin>>n;
while(n!=0)
{
	r=n%10;
	s=s+r;
	n=n/10;
	}
while(s!=0)
{
	p=s%10;
	q=q+p;
	s=s/10;
}
while(q!=0)
{
	t=q%10;
	w=w+t;
	q=q/10;
}
while(w!=0)
{
	f=w%10;
	e=e+f;
	w=w/10;
}
if(e==1)
cout<<"IT IS MAGIC NUMBER";
else
cout<<"IT IS NOT A MAGIC NUMBER";
getch();
return 0;
}


