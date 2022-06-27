// FUNCTION OVERLOADING
#include <iostream>
using namespace std;

// int sum(int a,int b){
int sum(float a, int b)
{
    cout << "Using function with 2 arguments:" << endl;
    return a + b;
}
int sum(int a, int b, int c)
{
    cout << "Using function with 3 arguments:" << endl;
    return a + b + c;
}
int volume(double r, int h)
{
    return (3.14 * r * r * h);
}
int volume(int a)
{
    return (a * a * a);
}
int volume(float l, int b, int h)
{
    return (l * b * h);
}
int main()
{
    cout << "The sum of 1.5,2 is " << sum(1, 2) << endl;
    cout << "The sum of 1,2,3 is " << sum(1, 2, 3) << endl;
    cout << "The volume of cylinder of radius 5.2 and height 2 is " << volume(5.2, 2) << endl;
    cout << "The volume of cube of side 2 is " << volume(2) << endl;
    cout << "The volume of cuboid of length 5.2,breadth 3 and height 2 is " << volume(5.2, 3, 2) << endl;

    return 0;
}