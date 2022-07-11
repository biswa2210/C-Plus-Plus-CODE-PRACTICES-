//PARAMETERIZED constructor
#include<iostream>
using namespace std;
class PARAMETERIZED//in constructor class name and fuction name is same
{

	public:
		int p,q;
	public:
		PARAMETERIZED(int x, int y)//PARAMETERIZED contructor creation
		{
		     p=x;
			 q=y;	
		}
		int getp()
		{
			return p;
		}
		int getq()
		{
			return q;
		}
		~PARAMETERIZED()//destructor creation
		{
		}
		
};
int main()
{
	PARAMETERIZED ob(15,16);//object creation and automatically call constructor(PARAMETERIZED)
	cout<<"p = "<<ob.getp()<<endl;
	cout<<"q = "<<ob.getq();
}
