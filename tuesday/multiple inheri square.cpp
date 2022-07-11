//Calculate square perimeter and area using multiple inheritance;
#include<windows.h>
#include<math.h>
#include<time.h>
#include<string.h>
#include<conio.h>
#include<iostream>
using namespace std;
class sarea
{
public:
    float areas_calc(float a)
	{
		return a*a; 
	}	
};
class sperimeter
{
public:
	float perimeters_calc(float a)
	{
		return 4*a;
	}
	
};
class getelement:public sarea,public sperimeter//multiple inheritance
{
public:
	float side;
public:
	void getdata2()
	{
		cout<<"enter the each side length of a square=";
		cin>>side;
	}
	float areas_calc()
	{
		return sarea::areas_calc(side);
	}
	float perimeters_calc()
	{
		return sperimeter::perimeters_calc(side);
	}
};
int main()
{
system("color a");
system("title BISWA");
system("mode 1000");
getelement ob;
ob.getdata2();
cout<<"area= "<<ob.areas_calc()<<endl;
cout<<"perimeter="<<ob.perimeters_calc();
getch();
return 0;
}


