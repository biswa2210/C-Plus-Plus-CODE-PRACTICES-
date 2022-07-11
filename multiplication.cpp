#include<windows.h>
#include<math.h>
#include<time.h>
#include<string.h>
#include<conio.h>
#include<iostream>
using namespace std;
class mul
{

		public:
			int i,n,m;
		public:
			void multiplicationtable()
			{
				m=1;
				cout<<"enter the no= ";
				cin>>n;
				for(i=1;i<=10;i++)
				{
					m=n*i;
					cout<<endl<<endl<<"\t\t\t"<<n<<" x "<<i<<"="<<m<<endl;
				}
			}
	
};
int main()
{
system("color a");
system("title BISWA");
system("mode 1000");
mul obj;
obj.multiplicationtable();
getch();
return 0;
}


