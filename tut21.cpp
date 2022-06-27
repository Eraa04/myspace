// CLASSES,PUBLIC & PRIVATE ACCESS MODIFIERS
#include <iostream>
using namespace std;

class employee
{
private:
    int a, b, c;

public:
    int d, e;
    void setData(int a1, int b1, int c1); //DECLARATION
    void getData()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
        cout << "The value of d is " << d << endl;
        cout << "The value of e is " << e << endl;
    }
};
void employee::setData(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    employee era;
    // era.a=9--->throw error coz a is private
    era.d = 4;
    era.e = 10;
    era.setData(1, 2, 4);
    era.getData();
    return 0;
}