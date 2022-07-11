
// C++ program to check if we can run commands using
// system()
#include <iostream>
#include <cstdlib>
using namespace std;
int main ()
{
    if (system(NULL))
       cout << "Command processor exists";
    else
       cout << "Command processor doesn't exists";

    return 0;
}
