#include<stdio.h>
#include<conio.h>
#include<math.h>

class A
{
public:
int n,rem,h,sum,p,i;
public:
void BODY()
{
	rem=0,h=1,sum=0;
int n,rem=0,h=1,sum=0,p,i;
printf("enter the no=");
scanf("%d",&n);
p=n;
while(n!=0)
{
rem=n%10;
for(i=1;i<=rem;i++)
{
h=h*i;
}
sum=h+sum;
n=n/10;
h=1;
}
if(p==sum)
printf("%d is krishnamurthy no",sum);
else
printf("boro carrow");
}
};
int main()
{
A OB;
OB.BODY();
getch();
return 0;
}
