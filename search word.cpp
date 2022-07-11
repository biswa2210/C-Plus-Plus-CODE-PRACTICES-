#include<iostream>
#include<string.h>
using namespace std;
int main()
{
int i=1,position,F=0;
string  sentence;
string word;
cout<<"enter your paragraph   :       ";
getline(cin,sentence);
cout<<"\n\n\nenter your word     :      ";
cin>>word;
for(int i=1; (position=sentence.find(word)) !=-1 ;i++)
{
sentence=sentence.substr(++position);
cout<<"Found=  "<<word<<"   "<<i<<"\ttimes";
F++;
}
if(F==0)
{
    cout<<"word is not present";
}
else
{
}
return 0;
}
