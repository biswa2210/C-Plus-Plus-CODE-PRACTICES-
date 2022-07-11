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
	char ename[100];
	float esalary;
	int eage;
public:
	void calcYearlySalary()
	{
	cout<<"ENTER THE EMPLOY NAME : ";
    cin>>ename;
    cout<<"ENTER THE EMPLOY MONTHLY SALARY : ";
    cin>>esalary;
    cout<<"ENTER THE EMPLOY AGE= ";
    cin>>eage;
	}
};
class B:public A
{
	public:
		float yearly_salary,hra,net_salary;
	public:
		void setemploydata()
		{
	yearly_salary=esalary*12;
    hra=yearly_salary*0.15;
    net_salary=yearly_salary+hra;
        }
};
class C:public B
{
	public:
		void displayempdata()
		{
	cout<<ename<<"'S YEARLY SALARY="<<yearly_salary<<endl;
    cout<<ename<<"'S HOUSE RATE ALLOWENCE="<<hra<<endl;
    cout<<ename<<"'S NET SALARY="<<net_salary;
        }
};
int main()
{
system("color a");
system("title BISWA");
system("mode 1000");
C ob;
ob.calcYearlySalary();
ob.setemploydata();
ob.displayempdata();
getch();
return 0;
}


