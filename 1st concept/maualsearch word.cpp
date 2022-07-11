#include<iostream>
#include<string>
using namespace std;
int main()
{
        string sen, sub="biswa";
        int i,pos;
        cout<<"Enter the Sentence"<<endl;
        getline(cin,sen);
        /*cout<<"Enter string to find"<<endl;
        cin>>sub;*/
        for (int i=1;(pos=sen.find(sub)) != -1 ;i++)
        {
                sen=sen.substr(++pos);
             cout<<"Found = "<<sub<<" "<<i<<" Times"<<endl;
             f++;
        }
}
