#include<stdio.h>
#include<conio.h>
int main(void)
{
	int y,m;
	printf("Enter the No. of months=");
	scanf("%d",&m);
	y=m/12;
	x=m%12;
    printf("Requered the no. of years=%d\n",y);
    printf("Requered the no. of months=%d",x);
	getch();
}
