#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
	int b=0,n,i;
	cout<<"ENTER THE RANGE=";
	cin>>n;
	for(i=1;i<=n;i=(i+2))
	{
		b=b+i;
		cout<<i<<"+";
	}
	cout<<"="<<b<<"(THE ADDITION OF ALL ODD NUMBERS)";
getch();
return 0;
}

