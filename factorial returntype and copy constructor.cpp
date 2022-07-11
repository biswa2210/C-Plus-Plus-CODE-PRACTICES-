//find factorial of a no with copy constructor;
#include<iostream>
#include<conio.h>
using namespace std;
class fact
{
	public:
		int f,i,n;
	public:
		fact(int f=1)
		{
			cout<<"\n\nenter the no = ";
			cin>>n;
			for(i=1;i<=n;i++)
			{
				f=f*i;
		    }
		    cout<<"\nfactorial of the no is= "<<f;
		}
};
int main()
{
	fact ob1;
	fact ob2(1);
	fact ob3(1);

}
