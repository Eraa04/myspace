// POINTERS
#include<iostream>
using namespace std;

int main(){
    int a=3;
    int* b=&a; 
    // (=> value at b is equal to address of a)
    // & operator => address of operator

    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<b<<endl;

    // * => dereferance operator(value at)
    cout<<"The value at address b is "<<*b<<endl;
    // (* => value at and just prints the value)
    /* (here it prints the value of a because b 'a' ka address hold kr rha hai
    uske paas apni koi value nahi hai toh voh jiska address hold kr rha hai
    uski value hi likh dega)*/

    // pointer to pointer
    int**c=&b;
    cout<<"The address of b is "<<&b<<endl;
    // (& => address at and just stores the address of any variable)
    cout<<"The address of b is "<<c<<endl;

    cout<<"The value at address c is "<<*c<<endl;
    cout<<"The value at address value_at (value_at(c)) is "<<**c<<endl;

    return 0;
}