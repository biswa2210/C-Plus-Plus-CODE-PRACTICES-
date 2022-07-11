#include<stdio.h>
#include<conio.h>
int main(void)
{
	float p,r,t,w;
	printf("Enter the principal.=");
	scanf("%f",&p);
	printf("Enter the rate of interest.=");
	scanf("%f",&r);
	printf("Enter the time period of interest.=");
	scanf("%f",&t);
	w=(p*r*t)/100;
    printf("REQUERED the simple interest is=%f",w);   
	getch();
} 
