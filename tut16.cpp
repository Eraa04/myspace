// CALL BY VALUE & CALL BY REFERANCE
#include <iostream>
using namespace std;

// this will not swap a & b
// void swap(int a ,int b){
//     int temp=a;
//     a=b;
//     b=temp;
// }
// call by referance using pointers
// void swapPointer(int *a, int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// call by referance using C++ referance variables
void swapReferanceVar(int &a ,int &b){
    int temp=a;
    a=b;
    b=temp;
}
// int & swapReferanceVar(int &a ,int &b){
//     int temp=a;
//     a=b;
//     b=temp;
//     return a;
// }
int main()
{

    int x = 9, y = 4;
    cout << "The initial value of x is " << x << " and the value of y is " << y << endl;
    // swap(x,y);
    // cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;

    // swap(x,y);
    // cout<<"The sum of 9 and 4 is "<<sum(x,y)<<endl;

    // swapPointer(&x, &y);
    // cout << "The value of x is " << x << " and the value of y is " << y << endl;

    swapReferanceVar(x,y);
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;

    // swapReferanceVar(x,y)=766;
    // cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;

    return 0;
}