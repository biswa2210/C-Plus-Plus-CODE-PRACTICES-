#include<windows.h>
#include<math.h>
#include<time.h>
#include<string.h>
#include<conio.h>
#include<iostream>
using namespace std;
class Palin
{
	public:
		 int i, j, len, palindrome = 1;
         char str[80];
    public:
    void calc()
    {
    cout<<"Enter a string: ";
    gets(str);
    len = strlen(str);
    for(i=0, j=len-1; i<j; i++, j--)
	{
        if(str[i] != str[j])
		{
            palindrome = 0;
            break;
        }
    }
    if(palindrome==0)
        cout<<str<<" is not a palindrome!\n";
    else
        cout<<str<<" is a palindrome!\n";
	}
};
int main()
{
system("color a");
system("title BISWA");
system("mode 1000");
Palin obj;
obj.calc();
getch();
return 0;
}


