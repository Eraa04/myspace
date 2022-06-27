// VARIABLE SCOPE & DATA TYPES
#include<iostream>
using namespace std;

int glo=10;
void sum(){
    cout<<glo<<endl;
}

int main(){
    int glo=9;
    // glo=49;

    int a=4, b=9;
    float pi=3.14;
    char c='e';
    bool d=false;
    sum();
    cout<<glo;
    cout<<"\nThis is tutorial 4. \nHere the value of a is "<<a<<". \nThe value of b is "<<b;
    cout<<"\nThe value of pi is "<<pi;
    cout<<"\nThe value of c is "<<c;
    cout<<"\nThe value of bool is "<<d;

    return 0;
}