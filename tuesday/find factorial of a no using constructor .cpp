//find factorial of a no using constructor and returntype 
#include<windows.h>
#include<math.h>
#include<time.h>
#include<string.h>
#include<conio.h>
#include<iostream>
using namespace std;
class fact
{
public:
	int f,i,n;
public:
	fact()//default constructors
	{
		f=1;
	}
	int calc()/* user define fuction
	           to calaulate factorial 
	           of a no */
	{
		cout<<"enter the no=";
		cin>>n;
		for(i=1;i<=n;i++)
		{
			f=f*i;
		}
		return f;
	}
};
int main()
{
system("color a");
system("title BISWA");
system("mode 1000");
	fact ob;//only create class object default constructor is automatically calling itself
	int p;
	p=ob.calc();
	cout<<"the factorial ="<<p;
	getch();
	return 0;
}


