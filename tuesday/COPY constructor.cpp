//copy constructor
#include<windows.h>
#include<math.h>
#include<time.h>
#include<string.h>
#include<conio.h>
#include<iostream>
using namespace std;
class code
{
public:
	int id;
public:
	code()//dehault constructor
	{
	}
	code(int a)//default constructor again
	{
		id=a;
	}
	code(code &x)//copy constructor
	{
		id=x.id;
	}
	void display(void)
	{
		cout<<id;
	}
};
int main()
{
system("color a");
system("title BISWA");
system("mode 1000");
code A(100);
code B(A);
code C=A;
code D;
D=A;
cout<<"ID of A=";A.display();
cout<<"\nID of B=";B.display();
cout<<"\nID of C=";C.display();
cout<<"\nID of D=";D.display();
getch();
return 0;
}


