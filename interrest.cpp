#include<windows.h>
#include<math.h>
#include<time.h>
#include<string.h>
#include<conio.h>
#include<iostream>
using namespace std;
class A
{
public:
	char accname[1000];
	int  accno;
	float accbalance,interest;
public:
    void requereddatacalcinterest()
    {
    	cout<<"enter the customer name= ";
    	cin>>accname;
    	cout<<"enter the account no =";
		cin>>accno;
		cout<<"enter the accout balance=";
		cin>>accbalance;
		cout<<" The interest amount on account balance(per month 15%)";
	}
	void calcinterest()
	{
	 interest=(accbalance)*0.15;
	}
};
class B:public A
{
	public:
		void display()
		{
			cout<<endl<<"The interest is = "<<interest<<" RUPEES";
		}
};
int main()
{
system("color a");
system("title BISWA");
system("mode 1000");
B ob;
ob.requereddatacalcinterest();
ob.calcinterest();
ob.display();
getch();
return 0;
}


