#include<conio.h>
#include<string.h>
#include<windows.h>
#include<time.h>
#include<math.h>
#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"enter the range=";
	cin>>a;
	for(b=1;b<=a;b++)
	{
		
		cout<<b;
		Sleep(1200);
		
	}
	cout<<endl<<endl;
	cout<<"B";
	for(;;)
	{
		for(int i=0;i<3;i++)
		{ 
		
			cout<<"i";
			
		}
		cout<<"\b\b\b   \b\b\b";
	
    for(int i=0;i<3;i++)
		{
			
			cout<<"s";
			
		}
		cout<<"\b\b\b   \b\b\b";
		
		    for(int i=0;i<3;i++)
		{
		
			cout<<"w";
			
		}
		cout<<"\b\b\b   \b\b\b";
		
		for(int i=0;i<5;i++)
		{
			
			cout<<"a";
			
		}
		cout<<"\b\b\b\b\b     \b\b\b\b\b";
	}

getch();
return 0;
}

