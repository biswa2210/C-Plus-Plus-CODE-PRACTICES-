#include<windows.h>
#include<math.h>
#include<time.h>
#include<string.h>
#include<conio.h>
#include<iostream>
using namespace std;

class Palindrome
{
	public:
		char a[10000],r[10000];
	public:
	  void calc()
 {
	  
	   printf("Enter the string=\n");
   gets(a);
   /* Copy input string and reverse it*/
   strcpy(r, a);
   /* reverse string */
   strrev(r);
   /* Compare reversed string with inpit string */
   if(strcmp(a, r) == 0 )
      printf("%s is a palindrome string.\n", a);
   else
      printf("%s is not a palindrome string.\n", a);
 }
};

int main()
{
system("color a");
system("title BISWA");
system("mode 1000");
Palindrome ob;
ob.calc();
getch();
return 0;
}



