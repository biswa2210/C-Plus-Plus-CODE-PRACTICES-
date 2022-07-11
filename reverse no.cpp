#include<windows.h>
#include<math.h>
#include<time.h>
#include<string.h>
#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
	int n,rem=0,c=0;
cout<<"please enter the number=";
cin>>n;
for(;n!=0;n=n/10)
{
c=n%10;
rem=(rem*10)+c;
}
cout<<"the reverse number is= "<<rem;
getch();
return 0;
}


