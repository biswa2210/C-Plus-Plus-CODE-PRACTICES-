#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
    int a,b,t,sum=0;
    cout<<"enter the number of terms to addition: ";
    cin>>a;
    cout<<"\n\n ";
    for(int b=1;b<=a;b++)
    {
    	
    	cin>>t;
    	cout<<"+";
    	sum=t+sum;
	}
	cout<<"\n-----------------";
    cout<<"\naddition result : "<<sum;
    getch();
    return 0;
}
