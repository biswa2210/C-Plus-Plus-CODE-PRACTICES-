#include<windows.h>
#include<math.h>
#include<time.h>
#include<string.h>
#include<conio.h>
#include<iostream>
using namespace std;
class A
{
public:
	char mname[1000];
	float avgcollection,mcollection;
	int mdaysrun,mlength;
public:
	void requerdataforaverragecollection()
	{
		cout<<"ENTER THE MOVIE NAME ="<<endl;
		cin>>mname;
		cout<<"ENTER THE DURATION OF THIS MOVIE IN MINUTES="<<endl;
		cin>>mlength;
		cout<<"TOTAL COLLECTION IN RUPEES FOR THE MOVIE="<<endl;
		cin>>mcollection;
		cout<<"NUMBER OF DAYS THE MOVIE HAS RUN="<<endl;
		cin>>mdaysrun;
	}
	void setMovieData()
	{
		(avgcollection)={(mcollection)/(mdaysrun)};
	}
};
class B:public A
{
	public:
       void displaymoviedata()
       {
       	cout<<"Averrage Collection of"<<" "<<mname<<"="<<avgcollection<<endl;
       	cout<<"DURATION OF THIS MOVIE= "<<mlength<<endl;
       	cout<<"NO OF DAYS MOVIE HAS RUN = "<<mdaysrun;
       } 
};
int main()
{
system("color a");
system("title BISWA");
system("mode 1000");
B ob;
ob.requerdataforaverragecollection();
ob.setMovieData();
ob.displaymoviedata();
getch();
return 0;
}


