// C program to illustrate exit() function.
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    printf("START");
 
    exit(0); // The program is terminated here
 
    // This line is not printed
    printf("End of program");
}
