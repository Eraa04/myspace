// FUNCTIONS & FUNCTIONS PROTOTYPES
#include <iostream>
using namespace std;

// int sum(int, int);// function prototype
// void g(void);
//  or void g();

int sum(int a, int b)   //(a & b formal parameters)
{
    int c = a + b;
    return c;
}

void g()
{
    cout << "\nHELLO";
}

int main()
{
    int num1, num2;   //(num1 & num2 actual parameters)
    cout << "The value of num1 is " << endl;
    cin >> num1;

    cout << "The value of num2 is " << endl;
    cin >> num2;

    cout << "The value of sum is " << sum(num1, num2);
    g();
    return 0;
}


