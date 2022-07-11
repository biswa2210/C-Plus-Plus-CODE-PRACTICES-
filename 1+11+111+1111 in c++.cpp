#include<iostream>
using namespace std;

int main() 
{
	int a=0,i,n;
	cout<<"please enter the range=";
	cin>>n;
	for(i=1;i<=n;i=(i*10)+1)
	{
		a=a+i;
		cout<<"+"<<i;
	}
	cout<<"="<<a;
}
