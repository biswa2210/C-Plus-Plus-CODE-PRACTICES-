#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class encapsulation
{
	private :
		      int a;
		      char b;
	public: 
	int geta() const
	{
		return a;
	}
		char getb() const
	{
		return b;
	}
	void seta(int a)
	{
		this->a=a;
	}
		void setb(char b)
	{
		this->b=b;
	}
};
int main()
{
	encapsulation ob;
	ob.seta(100);
	ob.setb('A');
	cout<<ob.geta()<<endl;
cout<<ob.getb()<<endl;
}
