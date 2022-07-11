#include<windows.h>
#include<math.h>
#include<time.h>
#include<string.h>
#include<conio.h>
#include<iostream>
using namespace std;
class fibonacci
{
 public:
 	    int f,s,ans,i,n,ct;
 public:
    	void input_calc_printing()
    	 {
    	 	f=0,s=1;
		  cout<<"enter the no of terms= ";
		  cin>>n;
		  cout<<endl<<endl<<"fibonacci series is-------";
		  for(i=0;i<n;i++)
		  {
		  	if(i==1 && i==0)
		  	{
		  		ans=i;
		  		cout<<ans<<" ";
			}
		    else
  			{
 				ans=(f+s);
 				f=s;
 					s=ans;
			}
 				cout<<ans<<"  ";
 						ct=ct+1;
 						if(ct==n)
    					 break;
		   }
		  	
	     }
};

int main()
{
system("color a");
system("title BISWA");
system("mode 1000");
fibonacci ob;
ob.input_calc_printing();
getch();
return 0;
}


