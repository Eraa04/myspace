// CONSTANTS,MANIPULATORS & OPERATOR PRECEDANCE
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    // int a=2;
    // cout<<"The value of a was: "<<a<<endl;

    // a=3;
    // cout<<"The value of a is: "<<a<<endl;

    // constants in c++
    //    const int a=2;
    //    cout<<"The value of a was: "<<a<<endl;

    //     int a=3;
    //     cout<<"The value of a is: "<<a<<endl;

    // manipulators:controls how data is dispayed
    int a = 3, b = 45, c = 678;

    cout << "The value of a without setw is: " << a << endl;
    cout << "The value of b without setw is: " << b << endl;
    cout << "The value of c without setw is: " << c << endl;
    //(by default:left margin)

    cout << "The value of a with setw is: " << setw(5) << a << endl;
    cout << "The value of b with setw is: " << setw(5) << b << endl;
    cout << "The value of c with setw is: " << setw(5) << c << endl;
    //aligns at right margin

    // operator precedance
    int p=3,q=4;
    int x=(p*5)+q;
    int y=p+5*q;
    int z=((((p*5)+q)-45)+10);
    cout<<x<<endl;
    cout<<y<<endl;
    cout<<z;

    return 0;
}