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
int i,j,s;
for(i=1;i<=5;i++)
{
for(s=i;s<=4;s++)
{
	cout<<" ";
}
for(j=1;j<=(i*2);j++)
{
cout<<"*";
}
cout<<endl;
}
getch();
return 0;
}


