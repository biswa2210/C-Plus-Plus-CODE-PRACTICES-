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
		void input()
		{
			cout<<"enter the side of a square= ";
			cin>>r;
		}
		void calculation()//parameter passing.
		{
			cout<<"the area of this square= "<<(r*r);//calculating & printing portion
			cout<<endl<<"the perimeter of this square= "<<(4*r);//calculating & printing portion
		}
};

int main()
{
system("color a");
system("title BISWA");
system("mode 1000");
Circle object;//object creation
object.input();//input function calling
object.calculation(); //calculation function calling
getch();
return 0;
}


