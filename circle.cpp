#include <iostream>
#include <math.h>
 
using namespace std;
 
int pth (int x,int y)  {
    return sqrt (pow(x,2)+pow(y,2));
 }
 
int main ( )  {
 
    int c=0;
    int r=10;
 
    const int width=r;
    const int length=r*1.5;
 
    for (int y=width;y >= -width;y-=2)  {
        for (int x=-length;x <= length;x++)  {
 
            if ((int) pth(x,y)==r) cout << "*";
            else cout << " ";
 
         }
         cout << "\n";
     }
     cin.get();
 
return 0;
}
