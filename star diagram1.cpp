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
int i,j;
for(i=5;i>=1;i--)
{
for(j=1;j<=i;j++)
{
	cout<<"*";
}
cout<<"\n";
}
getch();
return 0;
}


