#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<iostream>
using namespace std;
int main()
{
 int i,n,p=2,s=0,w,c=0;
 cout<<"Enter the No.of terms=";
 cin>>n;
 for(i=0;i<=(n*n*n);i+=2)
 {
  w=pow(p,i);
  cout<<"("<<p<<"*"<<w<<")"<<"+";
  s=s+(w*p); 
  c++;
  if(c==n)
  {
  	break;
  }                                  
 } 
 cout<<"="<<s;
 for(;;)
 {
 	for(int v=0;v<3;v++)
 	{
      cout<<".";
    }
    cout<<"\b\b\b   \b\b\b";
}
 getch();
 return 0;
}
