#include<conio.h>
#include<string.h>
#include<windows.h>
#include<time.h>
#include<math.h>
#include<iostream>
using namespace std;
int main()
{
	int i,j,s;
for(i=1;i<=3;i++)
{
for(s=3;s>i;s--)
{
	cout<<" ";
}
for(j=1;j<(i*2);j++)
{
cout<<"*";
}
cout<<endl;
}
getch();
return 0;
}

