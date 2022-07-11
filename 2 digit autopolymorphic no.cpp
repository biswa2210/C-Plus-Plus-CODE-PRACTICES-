#include<windows.h>
#include<math.h>
#include<time.h>
#include<string.h>
#include<conio.h>
#include<iostream>
using namespace std;
class Twodigiauto
{
public:
	int n;
public:
	void calc()
	{
		cout<<"enter any 2 digit no=  ";
		cin>>n;
		if(((n*n)%100)==n)
		{
			cout<<"it is 2 digit autopolymorphic no";
		}
		else
		{
		cout<<"it is not a autopolymorphic no";
	   }
	}
};
int main()
{
system("color a");
system("title BISWA");
system("mode 1000");
Twodigiauto ob;
ob.calc();
getch();
return 0;
}


