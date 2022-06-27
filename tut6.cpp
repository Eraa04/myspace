// HEADER FILES & OPERATORS
// system header file
#include <iostream>
// user defined header file
// #include "this.h"

using namespace std;

int main(){
    cout<<"Following are the types of operators in c++"<<endl;
    int a=9,b=4;
    // arithmetic operators
    cout<<"The value of a+b is "<<a+b;
    cout<<"\nThe value of a-b is "<<a-b;
    cout<<"\nThe value of a*b is "<<a*b;
    cout<<"\nThe value of a/b is "<<a/b;
    cout<<"\nThe value of a%b is "<<a%b;
    cout<<"\nThe value of a++ is "<<a++;
    cout<<"\nThe value of a-- is "<<a--;
    cout<<"\nThe value of ++a is "<<++a;
    cout<<"\nThe value of --a is "<<--a;
    cout<<endl;

    // assignment operators
    // int a=3,b=9
    // chard='d';


    // comparison operators
    // a=9,b=4
    cout<<"\nThe value of a==b is "<<(a==b);
    cout<<"\nThe value of a!=b is "<<(a!=b);
    cout<<"\nThe value of a>b is "<<(a>b);
    cout<<"\nThe value of a<b is "<<(a<b);
    cout<<"\nThe value of a<=b is "<<(a<=b);
    cout<<"\nThe value of a>=b is "<<(a>=b);
    cout<<endl;

    // logical operators
    // a=9,b=4
    cout<<"\nThe value of this logical and operator ((a==b) && (a<b))is: "<<((a==b) && (a<b));
    cout<<"\nThe value of this logical or operator ((a==b) || (a>b))is: "<<((a==b) || (a>b));
    cout<<"\nThe value of this logical not operator (!(a==b))is: "<<(!(a==b));
   
    return 0;
}