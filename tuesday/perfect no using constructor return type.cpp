// perfect no using constructor return type
#include<windows.h>
#include<math.h>
#include<time.h>
#include<string.h>
#include<conio.h>
#include<iostream>
using namespace std;
class perfect
{
public:
	int n,i,sum,l;
public:
	perfect()//default constructor
	{
		sum=0;
		l=0;
	}
	int calc()
	{
		cout<<"enter the no= ";
		cin>>n;
		for(i=1;i<=(n/2);i++)
		{
			if(n%i==0)
			{
				sum=sum+i;
			}
		}
		if(sum==n)
		 {
			l=1;
		 }
	    
		return l;
		
	}
};
int main()
{
system("color a");
system("title BISWA");
system("mode 1000");
int p;
perfect ob;
p=ob.calc();
if(p==1)
cout<<"it is perfect no";
else
cout<<"it is not perfect no";
getch();
return 0;
}


