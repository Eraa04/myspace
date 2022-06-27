// REFERANCE VARIABLES & TYPECASTING
#include <iostream>

using namespace std;

int c = 20;

int main()
{
    // BUILT IN DATA TYPES
    int a, b, c;

    cout << "Enter the value of a:" << endl;
    cin >> a;
    cout << "Enter the value of b:" << endl;
    cin >> b;
    c = a + b;
    cout << "The sum is " << c << endl;
    cout << "The global c is: " << ::c << endl;

    float d = 4.9;       // float d=4.9f;
    long double e = 4.9; // long double e=4.9l;
    cout << "The value of d is " << d << ".The value of e is " << e << "." << endl;
    cout << "The size of 4.9 is " << sizeof(4.9) << endl;
    // (by default gives size of double)
    cout << "The size of 34.4f is " << sizeof(34.4f) << endl;
    cout << "The size of 34.4F is " << sizeof(34.4F) << endl;
    cout << "The size of 34.4l is " << sizeof(34.4l) << endl;
    cout << "The size of 34.4L is " << sizeof(34.4L) << endl;

    // REFERANCE VARIABLES
    float x = 455;
    float &y = x;
    cout << x << endl;
    cout << y << endl;

    // // TYPECASTING
    // int x=10;
    // float y=10.4;
    // cout<<"The value of x is "<<float(x)<<endl;
    // cout<<"The value of y is "<<(int)y<<endl;
    // //bracket doesn't make a difference.

    // cout<<"The expression is "<<x+y<<endl;
    // cout<<"The expression is "<<x+int(y)<<endl;
    // cout<<"The expression is "<<x+(int)y<<endl;

    return 0;
}