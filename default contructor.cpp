//default constructor
#include<iostream>
using namespace std;
class DEFAULT//in constructor class name and fuction name is same
{
	public:
		int x,y;
	public:
		DEFAULT()//default contructor creation
		{
		x=0;
		y=1;	
		}
		~DEFAULT()//destructor creation
		{
		}
		
};
int main()
{
	DEFAULT ob;//object creation and automatically call constructor(default)
	cout<<"x = "<<ob.x<<endl;
	cout<<"y = "<<ob.y;
	return 0;
}
