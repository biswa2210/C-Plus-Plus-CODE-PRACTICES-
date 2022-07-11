#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main ()
{
fstream a,b;
char ch;
a.open("bunty.txt"); //The file from which the content will be copied
b.open("babli.txt"); //The file to which the content will be copied
while (!a.eof())
{
a.get(ch); //reading from file object 'a'
cout<<ch;
b<<ch; //writing to file babli.txt
}
a.close();
b.close();
return 0;
}
