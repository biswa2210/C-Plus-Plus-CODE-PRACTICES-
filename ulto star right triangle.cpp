#include<conio.h>
#include<string.h>
#include<windows.h>
#include<time.h>
#include<math.h>
#include<dos.h>
#include<iostream>
using namespace std;
int main()
{
	int i,j,o;
for(i=1;i<=4;i++)
{
for(j=1;j<=i;j++)
{
	cout<<"* ";
       }
 cout<<"\n";
 
}
cout<<"*****";
for(;;)
{
	for(o=0;o<5;o++)
	{
		cout<<"*";
	}
	cout<<"\b\b\b\b\b     \b\b\b\b\b";
}
getch();
return 0;
}

