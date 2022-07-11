#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<time.h>
#include<windows.h>
int main()
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
printf("||||");
Sleep(1600);
printf("\n\n\n\n\n\t\t\t\t\tloading complete...");
Sleep(2000);
system("cls");
int n,h,j=0;
printf("enter the numbers=");
scanf("%d",&n);
for(;n>0;n=n/10)
{
	h=n%10;
    if(h==0)
    {
    	j++;
	}
}
Sleep(1200);
printf("total no of zeros=%d",j);
getch();
}

