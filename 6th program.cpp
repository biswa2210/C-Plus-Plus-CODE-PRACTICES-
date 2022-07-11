#include<stdio.h>
#include<conio.h>
int main(void)
{
	int a,b,c,p,q;
	printf("Enter the 1st No.=");
	scanf("%d",&a);
	printf("Enter the 2nd No.=");
	scanf("%d",&b);
	printf("Enter the 3rd No.=");
	scanf("%d",&c);
	p=(a+b+c);
	q=(a+b+c)/3;
    printf("The addition result is=%d\n",p);
    printf("The avverage result is=%d",q);    
	getch();
}
