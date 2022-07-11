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
int a[500000],i,n;
cout<<"ENTER THE RANGE=";
cin>>n;
//input array
for(i=0;i<n;i++)
{
cout<<"ENTER THE NO=";
cin>>a[i];
}
//print array
for(i=0;i<=n;i++)
{
cout<<"THE POSITION IN ARRAY a"<<"["<<i<<"]"<<"="<<a[i]<<endl;
}
getch();
return 0;
}


