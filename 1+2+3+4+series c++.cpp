#include<iostream>
using namespace std;

int main() 
{
	int a=0,i,n;
	cout<<"please enter the range=";
	cin>>n;
	for(i=0;i<=n;i++)
	{
		a=a+i;
		cout<<"+"<<i;
	}
	cout<<"="<<a;
}
