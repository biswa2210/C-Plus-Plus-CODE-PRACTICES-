#include<windows.h>
#include<math.h>
#include<time.h>
#include<string.h>
#include<conio.h>
#include<iostream>
using namespace std;
class Sseries
{
public:
	int i,n,j,sum,sum2,h;
public:
	void series()
	{
		h=1;
		sum=0;
		sum2=0;
		cout<<"Enter the range=";
		cin>>n;
for(i=1;i<=n;i++)
	{
		h=1;
		if((i%2)!=0)
		{
		for(j=1;j<=i;j++)
		 {	
		h=j*h;
		sum=h+sum;
		 }
			
		}
		sum2=i+sum2;
			cout<<"("<<i<<"/"<<h<<")"<<"+";
	}
	
	cout<<"="<<"("<<sum2<<"/"<<sum<<")";
    }
};
int main()
{
system("color a");
system("title BISWA");
system("mode 1000");
Sseries obj;
obj.series();
getch();
return 0;
}


