#include<iostream>
using namespace std;
class prime
{
	public:
		int h,n,i;
	public:
		void check()
		{
			h=0;
			cout<<"enter the no= ";
			cin>>n;
			if(n!=0)
			{
				for(i=2;i<=(n/2);i++)
				{
					if(n%i==0)
					{
						h=1;
						break;
					}
				}
				if(h==0)
				{
					cout<<"it is  prime";
				}
				else
				cout<<"it is  not  prime";
			}
			
			else
			cout<<"NA";
}
};
int main()
{
	prime object;
	object.check();
	return 0;
}
