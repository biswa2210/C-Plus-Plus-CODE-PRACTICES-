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
	int a,b,c,n;
	cout<<"ENTER THE RANGE=";
	cin>>n;
	cout<<"ODD NUMBERS\n";
	for(a=1;a<n;a=a+2)
	{
		cout<<"THE ODD NUMBER IS="<<a<<endl;
	}
	
	cout<<"\n";
	cout<<"EVEN NUMBERS";
	cout<<"\n";
	
	for(b=2;b<=n;b=b+2)
	{
		cout<<"THE EVEN NUMBER IS="<<b<<endl;
	}
	
	cout<<"\n";
	cout<<"AUTOPOLYMORPHIC NUMBERS";
	cout<<"\n";	
	
		for(c=1;c<=n;c++)
	{
		if((c*c)%10==c)
		cout<<"THE AUTOPOLYMORPHIC NUMBER IS="<<c<<endl;
		else
		cout<<c<<"=NA"<<endl;
	}
getch();
return 0;
}


