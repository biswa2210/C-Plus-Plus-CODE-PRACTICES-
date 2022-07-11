#include<windows.h>
#include<math.h>
#include<time.h>
#include<string.h>
#include<conio.h>
#include<iostream>
using namespace std;
class factorial
{
  public:
  	
    int i,n,h;
    
  public:
  		
  		void input_calc_print()
  	 		{
  	 	        
  	 	        h=1;
  	        	cout<<"enter the no = ";
  	        	cin>>n;
  	        	for(i=1;i<=n;i++)
  	        	 {
  	        		h=i*h;
  	        		cout<<i<<"*";
			     }
  	            
  	            cout<<"="<<h;
  	            
	 		}
	  	
};
int main()
{
system("color a");
system("title BISWA");
system("mode 1000");
factorial ob;
ob.input_calc_print();
getch();
return 0;
}


