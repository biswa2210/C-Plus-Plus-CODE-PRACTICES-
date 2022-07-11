#include<windows.h>
#include<math.h>
#include<time.h>
#include<string.h>
#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
system("color a");
system("title BISWA");
system("mode 1000");
    // this array can store 3 values

    int i, j, k, t[1][1][3];

    cout<<"Enter 3 values: \n";

    for(i = 0; i < 1; i++)
	 {
        for (j = 0; j < 1; j++) 
	{
    for(k = 0; k < 3; k++ )
		{
       cin>>t[i][j][k];
        }
       }
    }

    // Displaying values 

   cout<<"\nDisplaying values:\n";

    for(i = 0; i < 1; i++)
	 {
        for (j = 0; j < 1; j++) 
	{
            for(k = 0; k < 3; k++ ) 
	{
         cout<<"t"<<"["<<i<<"]"<<"["<<j<<"]"<<"["<<k<<"]"<<"="<<t[i][j][k]<<endl;
    }
}
}

getch();
getch();
return 0;
}


