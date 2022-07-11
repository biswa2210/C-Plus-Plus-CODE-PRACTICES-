#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<string.h>
int main()
{
	system("title BISWA LOVES ROMI");
    system("mode 1000");
char a[1000];
char b[1000]="BISWA";
printf("ENTER YOUR NAME=  ");
gets(a);
Sleep(1000);
printf("\n\n");
Sleep(1000);
printf("%s'S  TRUE LOVERS NAME=  BISWA",a);
Sleep(3000);
printf("\n\nRESULT  IS=====>>    %s+%s\n\n\n",a,b);
    int i, j, n;
    int len;
char name[50]="BISWA+ROMI";
    len = strlen(name);

   printf("Enter the range :  ");
    scanf("%d", &n);
system("color a");
    len = strlen(name);
printf("\n\n\n");
    // Print upper part of the heart shape
    for(i=n/2; i<=n; i+=2)
    {
        for(j=1; j<n-i; j+=2)
        {

            printf(" ");
        }

        for(j=1; j<=i; j++)
        {

            printf("*");
        }

        for(j=1; j<=n-i; j++)
        {
            printf(" ");
        }

        for(j=1; j<=i; j++)
        {

            printf("*");
        }

        printf("\n");
    }

    // Prints lower triangular part of the pattern
    for(i=n; i>=1; i--)
    {
        for(j=i; j<n; j++)
        {

            printf(" ");
        }

        // Print the name
        if(i == n)
        {
            for(j=1; j<=(n * 2-len)/2; j++)
            {

                printf("*");
            }

            printf("%s", name);

            for(j=1; j<(n*2-len)/2; j++)
            {

                printf("*");
            }
        }
        else
        {
            for(j=1; j<=(i*2)-1; j++)
            {

                printf("*");
            }
        }

        printf("\n");
    }

getch();
}
