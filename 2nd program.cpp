#include<stdio.h>
#include<conio.h>
int main(void)
{
	int y,x,d;
	printf("Enter the no. of days=");
	scanf("%d",&d);
	y=d/365;
	x=d%365;
	printf("REQUERED THE NO. FO YEARS= %d\n",y);
	printf("REQUERED THE NO. OF DAYS =%d",x);
	getch();
}
