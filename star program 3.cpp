#include<windows.h>
#include<math.h>
#include<time.h>
#include<string.h>
#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
system("color d");
system("title BISWA");
system("mode 1000");
int i,j,s;
for(i=4;i>=1;i--)
{
for(s=i;s<=3;s++)
{
	cout<<" ";
}
for(j=1;j<=i;j++)
{
cout<<"* ";
}
cout<<"\n";
}
getch();
return 0;
}


