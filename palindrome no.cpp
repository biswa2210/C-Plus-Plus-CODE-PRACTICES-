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
	int n,c,rev=0,r;
	cout<<"PLZ ENTER THE INTEGER NUMBER=";
	cin>>n;
	c=n;
	while(c>0)
	{
		r=c%10;
		rev=(rev*10)+r;
		c=c/10;
	}
	if(n==rev)
cout<<"IT IS A PALINDROME NO.";	
	else
cout<<"IT IS NOT A PALINDROME NO.";
getch();
return 0;
}


