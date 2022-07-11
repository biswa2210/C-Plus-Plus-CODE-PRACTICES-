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
int n,i,f=0,s=1,ans;
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
 }
cout<<"\n\n\n\n\n\n********************************************************************************";
cout<<"THANK YOU SIR\n";
getch();
return 0;
}


