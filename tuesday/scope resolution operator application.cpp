//application of scope resolution operator
#include<windows.h>
#include<math.h>
#include<time.h>
#include<string.h>
#include<conio.h>
#include<iostream>
using namespace std;
int a=90;//global variable
class sroapplication
{
public:
	int a;
public:
	void func()
	{
		a=15;//local variable of this  function 
		cout<<"a(global)="<<::a<<endl;
		cout<<"a(local)="<<a;
		
	}
};
int main()
{
system("color a");
system("title BISWA");
system("mode 1000");
sroapplication object;
object.func();
getch();
return 0;
}


