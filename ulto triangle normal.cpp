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

