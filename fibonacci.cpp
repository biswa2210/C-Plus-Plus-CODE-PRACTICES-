#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
int n,i,f=0,s=1,ans,ct=0;
cout<<"ENTER THE NUMBER OF TERMS=";
cin>>n;
cout<<"\nFIBONACCI SERIZE";
cout<<"\n******************\t";
for(i=0;i<=n;i++)
{
 if(i<=1)
 {
 	ans=i;
 }
 else
 {
 ans=(f+s);
 f=s;
 s=ans;
}
 cout<<ans;
 ct=ct+1;
 if(ct==n)
     break;
 }
 cout<<"\n\n\n\n\n\n********************************************************************************";
cout<<"THANK YOU SIR\n";
getch();
return 0;
}

