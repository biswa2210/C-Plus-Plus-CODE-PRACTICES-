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
	int a;
	cout<<"ENTER THE no=";
	cin>>a;
		if((a*a)%10==a)
		{
		cout<<a<<"= is a autopollymorphic number";
		}
	else
	{
	cout<<a<<"= is not a autopollymorphic number";
}
getch();
return 0;
}


