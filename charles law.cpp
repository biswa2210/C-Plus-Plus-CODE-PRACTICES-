#include<conio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<time.h>
#include<iostream>
using namespace std;
int main()
{
char a[100000];
float v1,v2,t1,t2,h,f;
cout<<"Name of the Gas=";
gets(a);
cout<<"initial volume  of  this gas=";
cin>>v1;
cout<<"final volume  of  this gas=";
cin>>v2;
cout<<"initial tempture  of this gas(only degree centrigrade)=";
cin>>t1;
h=(t1+273);
t2=(h*v2)/v1;
cout<<"final tempture of  this gas="<<t2<<"kelvin";
f=t2-273;
cout<<"\nfinal tempture of this gas="<<f<<"degree centrigrade";
getch();
return 0;
}