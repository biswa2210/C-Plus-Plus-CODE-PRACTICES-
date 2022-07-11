#include<conio.h>
#include<string.h>
#include<windows.h>
#include<time.h>
#include<math.h>
#include<iostream>
using namespace std;
int main()
{
int i,j;
cout<<"enter the frequency(avobe 200)=";
cin>>i;
cout<<"enter the time period(1000 milisec=1sec avobe 1sec)=";
cin>>j;
Beep(i,j);
getch();
return 0;
}

