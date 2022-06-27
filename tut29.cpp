// CONSTRUCTORS
#include<iostream>
using namespace std;

class Complex{
    int a,b;
    public:
    // CREATING A CONSTRUCTOR
    Complex(void); //constructor declaration
    void printData(){
            cout<<"Your number is "<<a<<"+"<<b<<"i"<<endl;
        }
};

Complex::Complex(void){
    a=10;
    b=0;
    cout<<"Hello World"<<endl;
}
int main(){
    Complex c;
    c.printData();

    return 0;
}