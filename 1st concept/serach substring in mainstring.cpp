#include<iostream>
#include<string.h>
using namespace std;
int main()
{
string sen,word;
int pos;
cout<<"enter  the  sentence  :   ";
getline(cin,sen);
cout<<"\n\nenter the word  :   ";
cin>>word;
for(int i=1;(pos=sen.find(word))!=-1;i++)
{
 sen=sen.substr(++pos);
 cout<<"\n\n\n\nFound =  "<<word<<"    "<<i<<"     times"<<endl;
}
return 0;
}
