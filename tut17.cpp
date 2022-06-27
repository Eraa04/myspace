// INLINE FUNCTIONS,DEFAULT ARGUMENTS & CONSTANT ARGUMENTS
#include <iostream>
using namespace std;

inline int product(int a, int b)
{
    ;
    // static int c=0;
    // c=c+1;
    return a * b;
}
float moneyReceived(int currentMoney, float factor = 1.04)
{
    return currentMoney * factor;
}
// int strlen(const char*p);
int main()
{
    //int a,b;
    //cout<<"Enter the value of a & b "<<endl;
    //cin>>a>>b;

    //cout<<"The product of a & b is "<<product(a,b)<<endl;
    //cout<<"The product of a & b is "<<product(a,b)<<endl;


    int money = 100000;
    cout << "If you have " << money << " in your account,you will receive " << moneyReceived(money) << " rupees after one year." << endl;
    cout << "For VIP: If you have " << money << " in your account,you will receive " << moneyReceived(money, 1.1) << " rupees after one year.";

    return 0;
}