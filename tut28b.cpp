// MORE ON FRIENDS FUNCTIONS
#include<iostream>
using namespace std;

class C2;
class C1{
    int val1;
    friend void exchange(C1 &,C2 &);
    public:
        void inData(int a){
            val1=a;
        }
        void display(void){
            cout<<val1<<endl;
        }
};

class C2{
    int val2;
     friend void exchange(C1 &,C2 &);
    public:
        void inData(int a){
            val2=a;
        }
        void display(void){
            cout<<val2<<endl;
        }
};
/*
trick to swap 2 nums a and b:
tmp=a;
a=b;
b=tmp;
*/
void exchange(C1 & x,C2 & y){
    int tmp=x.val1;
    x.val1=y.val2;
    y.val2=tmp;
}
int main(){
    C1 oC1;
    C2 oC2;

    oC1.inData(10);
    oC2.inData(4);
    exchange(oC1,oC2);

    cout<<"The value of C1 after exchanging becomes:";
    oC1.display();
    cout<<"The value of C2 after exchanging becomes:";
    oC2.display();
    return 0;
}