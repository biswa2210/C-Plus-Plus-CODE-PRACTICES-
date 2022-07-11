//Hybrid inheritance
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
	int a;
protected:
	void geta()
	{
		cout<<"A= ";
		cin>>a;
	}
};
class B:public A
{
	public:
		void fc1()
		{
			geta();
			cout<<"(A*A)="<<(a*a)<<endl;
		}
};
class C
{
	public:
		int b;
	public:
		void fc2()
		{
			cout<<"B= ";
			cin>>b;
			cout<<"(B*B*B)="<<(b*b*b)<<endl;
		}
};
class D:public C,public B
{
	public:
		int sum;
	public:
		void LFC()
		{
			fc1();
			fc2();
			sum=(a*a)+(b*b*b);
			cout<<"\nsum of (A*A) AND (B*B*B)= "<<sum;
		}
};
int main()
{
system("color a");
system("title BISWA");
system("mode 1000");
D OBJECT;//only create object for class D
OBJECT.LFC();
getch();
return 0;
}


