//wap to calculate area and perimeter of any square.
#include<windows.h>
#include<math.h>
#include<time.h>
#include<string.h>
#include<conio.h>
#include<iostream>
using namespace std;

class Circle//creating a class//
{
	public:
		int ar,pr,r;
	public:
		void input_calculation()//parameter passing.
		{
			cout<<"enter the radius of a circle= ";
			cin>>r;
			cout<<"the area of this circle= "<<(3.14*r*r);//calculating & printing portion
			cout<<"\nthe perimeter of this circle= "<<(2*3.14*r);//calculating & printing portion
		}
};

int main()
{
system("color a");
system("title BISWA");
system("mode 1000");
Circle object;//object creation
object.input_calculation(); //calculation function calling
getch();
return 0;
}


