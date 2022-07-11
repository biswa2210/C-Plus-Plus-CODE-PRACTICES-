#include<windows.h>
#include<math.h>
#include<time.h>
#include<string.h>
#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
system("color b");
system("title BISWA");
system("mode 1000");

int i,j;
for(i=1;i<=4;i++)
{
for(j=1;j<=4;j++)
{
if(i!=j)
cout<<"*";
else
cout<<"=";
}
cout<<"\n";
}
getch();
return 0;
}


