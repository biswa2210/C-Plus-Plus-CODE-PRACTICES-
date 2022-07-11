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
for(i=3;i>=1;i--)
{
for(s=2;s>=i;s--)
{
cout<<" ";
}
for(j=1;j<(2*i);j++)
{
cout<<"*";
}
cout<<endl;
}
getch();
return 0;
}


