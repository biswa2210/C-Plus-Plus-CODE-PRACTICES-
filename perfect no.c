#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<windows.h>
#include<ctype.h>
#include<time.h>
void main()
{
	
printf("\n\n\n\n\\t\t\t\tloading");
Sleep(1000);
printf("\n\t\t||||");
Sleep(1500);
printf("|||");
Sleep(1300);
printf("||||");
Sleep(1000);
printf("|||");
Sleep(1400);
printf("||||");
Sleep(1000);
printf("||||||||");
Sleep(1600);
printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\tloading complete...");
Sleep(2000);
system("cls");
int i,n,s=0;
printf("Enter The Number=");
scanf("%d",&n);
for(i=1;i<n;i++)
{
if(n%i==0)
{
	s=s+i;
}
}
if(s==n)
printf("it is a perfect no");
else
printf("it is not a perfect no");
getch();
}



