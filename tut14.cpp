// STRUCTURES,UNIONS & ENUMS
#include <iostream>
using namespace std;

typedef struct student
{
    int eId;
    char favletter;
    float percentage;
} ep;

union money
{
    int rice;
    char car;
    float pounds;
};

int main()
{
    enum meal
    /* (enum assigns the numeric value to the given names as they are not
    variables and have no value of their own.)*/
    {
        breakfast,
        lunch,
        dinner
    };
    meal M1 = breakfast;
    meal M2 = lunch;
    meal M3 = dinner;
    // cout << (M1 == 2) << endl;
    // cout << (M1 == 0) << endl;
    cout << M1 << endl;
    cout << M2 << endl;
    cout << M3 << endl;
    // cout << breakfast << endl;
    // cout << lunch << endl;
    // cout << dinner << endl;

    union money m1;
    // (we can only print one value at a time)
    m1.rice = 12;
    // m1.car='e';
    // m1.pounds=45.9;
    cout << m1.rice << endl;

    // struct student era;
    ep era;
    ep ibadat;
    era.eId = 62575555;
    era.favletter = 'e';
    era.percentage = 95.8;

    ibadat.favletter = 'i';

    cout << "The value is " << era.eId << endl;
    cout << "The value is " << era.favletter << endl;
    cout << "The value is " << era.percentage << endl;

    cout << "The value is " << ibadat.favletter << endl;

    return 0;
}