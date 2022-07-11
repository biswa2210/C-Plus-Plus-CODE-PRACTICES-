#include<iostream>
using namespace std;

int main() 
{
	int a=0,i,n;
	cout<<"please enter the range=";
	cin>>n;
	for(i=2;i<=n;i=(i*10)+2)
	{
		a=a+i;
		cout<<"+"<<i;
	}
	cout<<"="<<a;
}
