#include<conio.h>
#include<string.h>
#include<windows.h>
#include<time.h>
#include<math.h>
#include<iostream>
using namespace std;
int main()
{
	char a[100000],r;
int i;
cout<<"ENTER YOUR NAME IS= ";
gets(a);
cout<<"enter replacing character= ";
cin>>r;
for(i=0;a[i]!='\0';i++)
{
if(a[i]==' ')
a[i]=r;
}
cout<<"updated string is= "<<a;
getch();
return 0;
}

