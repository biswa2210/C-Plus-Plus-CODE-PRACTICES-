#include<windows.h>
#include<math.h>
#include<time.h>
#include<string.h>
#include<conio.h>
#include<iostream>
using namespace std;

class calculator
{
  public:
    char op;
    float num1, num2;
  public:
  	    
  	    void calc()
  	    {
  	    	while(1)
  	    	{
  	        cout << "Enter operator either + or - or * or /: ";
    cin >> op;

    cout << "Enter two operands: ";
    cin >> num1 >> num2;

    switch(op)
    {
        case '+':
            cout << num1+num2;
            break;

        case '-':
            cout << num1-num2;
            break;

        case '*':
            cout << num1*num2;
            break;

        case '/':
            cout << num1/num2;
            break;

        default:
            // If the operator is other than +, -, * or /, error message is shown
            cout << "Error! operator is not correct";
            break;
		}
	}
	}
};
int main()
{
system("color a");
system("title BISWA");
system("mode 1000");
calculator object;
object.calc();
getch();
return 0;
}


