// FRIEND CLASSES & MEMBER FRIEND FUNCTIONS
#include<iostream>
using namespace std;

class Complex;
class Calculator{
    public:
        int add(int a,int b){
            return(a+b);
        }

        int sumRealComplex(Complex,Complex);
        int sumImagComplex(Complex,Complex);
};

    class Complex{
    int a,b;
    // individually declaring as friend
    // friend int Calculator::sumRealComplex(Complex o1,Complex o2);
    // friend int Calculator::sumImagComplex(Complex o1,Complex o2);
    // declaring entire class as friend
    friend class Calculator;
    public:
        void setNumber(int n1,int n2){
            a=n1;
            b=n2;
        }

        void printNumber(){
            cout<<"Your number is "<<a<<"+"<<b<<"i"<<endl;
        }
};

    int Calculator::sumRealComplex(Complex o1,Complex o2){
        return(o1.a+o2.a);
    }

    int Calculator::sumImagComplex(Complex o1,Complex o2){
        return(o1.b+o2.b);
    }
    int main(){
        Complex o1,o2;
        o1.setNumber(1,4);
        o2.setNumber(5,7);
        Calculator calc;
        int res=calc.sumRealComplex(o1,o2);
        cout<<"The sum of real part of o1 & o2 is "<<res<<endl;
        int resi=calc.sumImagComplex(o1,o2);
        cout<<"The sum of imaginary part of o1 & o2 is "<<resi<<endl;
    return 0;
}