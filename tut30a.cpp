// PARAMETERIZED AND DEFAULT CONSTRUCTORS
#include<iostream>
using namespace std;

class Complex{
    int a,b;
    public:
    Complex(int,int);
    // Complex(void);
    void printData(){
            cout<<"Your number is "<<a<<"+"<<b<<"i"<<endl;
        }
};

/*Complex::Complex(void){ //==>default constructor
    a=0;
    b=0;
    cout<<"Hello World"<<endl;
}
*/
Complex::Complex(int x,int y){ //==>parameterized constructor
    a=x;
    b=y;
    cout<<"Hello World"<<endl;
}

int main(){
    // implicit call
    Complex a(4,9);
    a.printData();

    // explicit call
    Complex b=Complex(10,4);
    b.printData();
    return 0;
}