/* The following program when executed gives a fish / shark figure made of '*' on the sceen */
#include<windows.h>
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
int i,j,k=11,a=15,t,t1,f=0,c=0,d=0,b=0; 
//Chenge the parameters 'k' & 'a' for getting your own desired shape of the fish
for(i=1;i<=14;i++)
{
if(i<=6)
{
k=k+2;
a=a-2;
t=k;
t1=a;
}
else if(i==7 || i==8)
{
c=0;
a=1;
k=31;
}
else{
if(f==0)
{
k=t;
a=t1;
f=1;
}
else
{
a+=2;
k-=2;
}
}
if(i>=4 && i<=6)
{
if(d==0)
{
c=16;
d=1;
}
c-=3;
}
if(i>=9 && i<=11)
{
if(d==1)
{
c=4;
d=0;
}
c+=3;
}
if(i==12)
c=0;
if(i>=5 && i<=6)
b++;
else if(i>=10)
b--;
for(j=1;j<=k+c;j++)
{
if(i<=8 && j>=a && j<=k || j>=k+c-b)
printf("*");
else
if(i>=9 && j>=a && j<=k || j==k+c)
printf("*");
else
printf(" ");
}
printf("\n");
}
system("pause");
}
