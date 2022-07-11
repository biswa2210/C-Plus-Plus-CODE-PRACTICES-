//a program for finding factorial no by using recurtion in c++


#include<iostream>
using namespace std;
// Function prototypes

int fact(int a);//function declaration

int main()
{
	int x,ans;
	cout<<"enter the no=";
	cin>>x;//taking input
	
	ans=fact(x);//function calling
	
	cout<<"\n  factorial ="<<ans<<endl;
	
}//end main fuction

int fact(int a)//function deffination
{
  int ans;
  if(a<=0)
  return(1);//fact(0)=1 by  deffination
  else
  ans=a*fact(a-1);//function call with recursion
  return(ans);//return the value of ans to main	
}
