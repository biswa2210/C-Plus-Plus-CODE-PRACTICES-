#include<iostream>
using namespace std;
class Dual
{
	public:
		int a;
	public:
		Dual(int x=0)
		{
			a=x;
			cout<<"  "<<a;
		}
};
int main()
{
	Dual ob;
	Dual OB2(45);
}
