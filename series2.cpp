#include<conio.h>
#include<math.h>
#include<iostream>
using namespace std;
int main()
{
 int i,n,s=0,c=0;
 cout<<"Enter the Range=";
 cin>>n;
 for(i=1;i!=0;i+=3)
 {
     if(i%2==0)
      cout<<" -"<<i;
     else
      cout<<"+"<< i;
     s=s+i;
c++;
if(c==n)
{
	break;
}
 }
 cout<<"="<<s;
 getch();
 return 0;
}
 
