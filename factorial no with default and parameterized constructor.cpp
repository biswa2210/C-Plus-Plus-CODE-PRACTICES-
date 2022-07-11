#include<iostream>
using namespace std;
class fact
{
	public:
		int f,n,i;
	public:
		fact()
		{
		   f=1;
		}
		fact(int n)
		{
			f=1;
			for(i=1;i<=n;i++)
			{
				f=f*i;
		    }
		    
		}
		void display()
		{
		    cout<<"\nfactorial of the no is= "<<f;
		}
};
int main()
{
	fact obfordc;
	int a;
	cout<<"\n\nenter the no = ";
	cin>>a;
	fact object(a);
	object.display();
	
}
