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
int i,n,s=0;
cout<<"Enter The Number=";
cin>>n;
for(i=1;i<n;i++)
{
if(n%i==0)
{
	s=s+i;
}
}
if(s==n)
cout<<"it is a perfect no";
else
cout<<"it is not a perfect no";
getch();
return 0;
}


