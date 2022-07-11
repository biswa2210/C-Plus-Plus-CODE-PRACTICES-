//calc peri and area by using multiple inheritance
#include<windows.h>
#include<math.h>
#include<time.h>
#include<string.h>
#include<conio.h>
#include<iostream>
using namespace std;
class area
{
public:
	float area_calc(float l,float b)
	{
		return l*b;
	}
};
class perimeter
{
public:
	float perimeter_calc(float l,float b)
	{
		return 2*(l+b);
	}
};
class rectangle:public area,public perimeter//multiple inheritance
{
public:
	float length,breadth;
public:
	void getdata()
	{
		cout<<"enter length of rectangle=";
		cin>>length;
		cout<<"enter breadth of rectangle=";
		cin>>breadth;
	}
	float area_calc()
	{
		return area::area_calc(length,breadth);
	}
	float perimeter_calc()
	{
		return perimeter::perimeter_calc(length,breadth);
	}
};
int main()
{
system("color a");
system("title BISWA");
system("mode 1000");
rectangle ob;
ob.getdata();
cout<<"Area="<<ob.area_calc();
cout<<"\n Perimeter="<<ob.perimeter_calc();
getch();
return 0;
}


