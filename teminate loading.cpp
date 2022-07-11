#include <iostream>
#include <time.h>
#include<dos.h>
using namespace std;

int main()
{
    cout << "Loading";
    for (;;)
	 {
        for (int i = 0; i<10; i++)
		 {
            cout << ".";
        }
        cout << "\b\b\b\b\b\b\b\b\b\b          \b\b\b\b\b\b\b\b\b\b";
               for (int i = 0; i<10; i++)
		 {
            cout << "g";
        }
        cout << "\b\b\b\b\b\b\b\b\b\b          \b\b\b\b\b\b\b\b\b\b";
    }
    return 0;
}
