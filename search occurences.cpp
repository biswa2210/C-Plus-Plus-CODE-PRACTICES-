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
int i,c=0;
char a[10000],j;
cout<<"Enter the string=";
gets(a);
cout<<"Enter the character to be OCUURENCE=";
cin>>j;
 for(i=0;a[i]!='\0';i++)
{
if(a[i]!=' ')	
{

if(a[i]==j)
c++;
}
	}	
if(c==0)
cout<<"\ncharacter is not present="<<c;
else 
cout<<"\nOccurence of character"<<j<<"="<<c;
getch();
return 0;
}


