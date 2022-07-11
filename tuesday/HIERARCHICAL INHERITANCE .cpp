//Hierarchical Inheritance
#include<windows.h>
#include<math.h>
#include<time.h>
#include<string.h>
#include<conio.h>
#include<iostream>
using namespace std;
class A// BASE CLASS
{
public:
	int a;
public:
	void f1()
	{
		cout<<"enter the no= ";
		cin>>a;
	}
};
class B: public  A//derived class 1
{
public:
	void f2()
	{
		cout<<"square of this no= "<<(a*a)<<endl;
	}
};

class C:public A//derived class 2
{
public:
	void f3()
	{
		cout<<"cube of this no= "<<(a*a*a)<<endl;
	}
};

class D:public A//derived class 3
{
public:
	void f4()
	{
		cout<<"root of this no= "<<pow(a,0.5);
	}
};

int main()//MAIN FUNCTION
{
system("color a");
system("title BISWA");
system("mode 1000");

B OB1;// OBJECT CREATION FOR CLASS B
OB1.f1();
OB1.f2();

C OB2;// OBJECT CREATION FOR CLASS C
OB2.f1();
OB2.f3();

D OB3;// OBJECT CREATION FOR CLASS D
OB3.f1();
OB3.f4();


/*WE CAN'T CREATE THE OBJECT OF BASE CLASS*/

getch();
return 0;
}


