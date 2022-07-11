#include<windows.h>
#include<math.h>
#include<time.h>
#include<string.h>
#include<conio.h>
#include<iostream>
using namespace std;

class Occur
{
public:
  
   int i,c=0;
   char a[10000],j; 
   
public:
	
  void calc()
  {
    cout<<"Enter the string=";
    gets(a);
    cout<<"Enter the character to be find occurences=";
    cin>>j;
  for(i=0;a[i]!='\0';i++)
   {
   
	 if(a[i]==j)
	 {
	c++;
			
	 }
   }
if(c==0)
cout<<"\ncharacter is not present= "<<c;
else 
cout<<"\nOccurence of this entired character =  "<<c; 
  }
};

int main()
{
system("color a");
system("title BISWA");
system("mode 1000");
Occur ob;
ob.calc();
getch();
return 0;
}


