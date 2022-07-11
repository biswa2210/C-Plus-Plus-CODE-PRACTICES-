#include<windows.h>
#include<math.h>
#include<time.h>
#include<string.h>
#include<conio.h>
#include<iostream>
using namespace std;
class range
{
	public:
		int n,i,l,j,s,f,k,sum2,rem,d;
	public:
		void range_nos()
		{

			cout<<"enter the range(only applicable for  3-digits numbers)= ";
			cin>>n;
			cout<<"checking for even odd & autopolymorphic & amstrong & prime & perfect \n \t loading....\n";
			for(i=1;i<=n;i++)
			{
				 d=i;
				if(i%2==0)
				{
					cout<<i<<"= even no"<<endl;
				}
				else if(i%2!=0)
				{
					cout<<i<<"= odd no"<<endl;
				}

				
				s=0;
			for(j=1;j<i;j++)
				{
					if(i%j==0)
							{
								s=s+j;
							}
				}
					if(s==i)
						cout<<i<<" =it is a perfect no"<<endl;
					else
						cout<<i<<" =it is not a perfect no"<<endl;
						
						   
   	               f=1;
                    for(k=2; k<=i/2; k++)
                       if(i%k == 0)
                      {
                        f = 0;
                         break;
                           }
                      if(f==1)
                     cout<<i<<" =it is a prime no"<<endl;
                     else
                     cout<<i<<" =it is not a prime no"<<endl;
                     
                     				
				if(((i*i)%10)==i)
				{
					cout<<i<<"= autopolymorphic no"<<endl;
				}
				else
				{
				cout<<i<<"= not a autopolymorphic no"<<endl;
			    }
			    sum2=0;
			    for(;i!=0;i=i/10)
			    {
			    	rem=i%10;
			    	sum2=(rem*rem*rem)+sum2;
				}
                     if(sum2==d)
                     {
                     	cout<<d<<" =it is amstrong no"<<endl;
					 }
					 else 
					  {
                     	cout<<d<<" =it is not a amstrong no"<<endl;
				}
				i=d;
				}
   }
				  
				
			
		};

int main()
{
system("color a");
system("title BISWA");
system("mode 1000");
range obj;
obj.range_nos();
getch();
return 0;
}


