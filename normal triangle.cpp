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
int j,i,s;
for(i=1;i<=4;i++)
{
for(s=3;s>=i;s--)
{
	cout<<" ";
       }
       for(j=1;j<=i;j++)
{
	cout<<"* ";
       }
 cout<<endl;
 
}
getch();
return 0;
}


