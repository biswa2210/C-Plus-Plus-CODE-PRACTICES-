/*program to explain inheritance with 
default and parameterized constructors in
both base class and derieved class*/


#include<windows.h>
#include<math.h>
#include<time.h>
#include<string.h>
#include<conio.h>
#include<iostream>
using namespace std;
class circle
{
protected:
	float radius;
public:
	circle()//default constructor
	{
		radius=0.0;
	}
	circle(float r)//parameterized constructor
	{
		radius=r;
	}
	void getrad()
	{
		cout<<"enter radius = "<<endl;
		cin>>radius;
	}
	float area()
	{
		float ar;
		ar=3.14*radius*radius;
		return ar;
	}
};
class cylinder : public circle//inheritacne
{
	protected:
		float h;
	public:
		cylinder()//default constructor 2
		{
			h=0.0;
		}
		cylinder(float r,float height)//paramiterized constructor 2
		{
			h=height;
		}
       void geth()
       {
	    cout<<"enter height="<<endl;
	    cin>>h;
       }
       float volume()
       {
       	float v;
       	v=3.14*h*radius*radius;
       	return v;
	   }
};
int main()
{
system("color a");
system("title BISWA");
system("mode 1000");
cylinder ob;
ob.getrad();
float A,B;
A=ob.area();
cout<<"area of circle="<<A<<endl;
ob.geth();
B=ob.volume();
cout<<"volume of cylinder="<<B;
getch();
return 0;
}


