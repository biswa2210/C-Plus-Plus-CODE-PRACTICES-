//wap to average n numbers c++;
#include<iostream>
using namespace std;

int main()
{
	int a[100000],b,n,c=0,h, g;
	cout<<"TOTAL NUMBERS OF AVERAGE=";
	cin>>n;
	for(b=0;b<n;b++)
	{
		cout<<"ENTER THE NUMBER=";
		cin>>a[b];
		c=c+a[b];
	}
	
	h=c%n;
	cout<<"\nTHE AVERAGE RESULT(remainder)="<<h;
	g=c/n;
	cout<<"   THE AVERAGE RESULT(consent)="<<g;
   return 0;	
}
