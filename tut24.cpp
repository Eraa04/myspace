// STATIC DATA MEMBERS & METHODS IN OOPS
#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the id " << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
    }

    static void getCount(void)
    {
        // cout<<id; throws error
        cout << "The value of count is " << count << endl;
    }
};

int Employee::count;
int main()
{
    Employee era, amayra, niya;
    // count is the static data member
    // era.id=1;
    // era.count=1;==>private
    era.setData();
    era.getData();
    Employee::getCount();

    amayra.setData();
    amayra.getData();
    Employee::getCount();

    niya.setData();
    niya.getData();
    Employee::getCount();

    return 0;
}