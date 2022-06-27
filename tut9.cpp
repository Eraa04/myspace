// CONTROL STRUCTURES,IF/ELSE,SWITCH STATEMENTS
#include <iostream>

using namespace std;

int main()
{
    int age;
    cout << "Tell me your age" << endl;
    cin >> age;

    // selection control structure:if-else-if ladder
    if ((age<18) && (age>0)){
        cout<<"You cannot come"<<endl;
    }
    else if(age==18){
        cout<<"You can wait"<<endl;
    }
    else if (age<1){
        cout<<"Where are you?"<<endl;
    }
    else {
        cout<<"You can come"<<endl;
    }

    // selection control structure:switch case
    // switch (age)
    // {
    // case 18:
    //     /* code */
    //     cout << "You can wait" << endl;
    //     break;
    // case 22:
    //     cout << "You can come" << endl;
    //     break;
    // case 2:
    //     cout << "You are too small" << endl;
    //     break;

    // default:
    //     cout << "Lemme see" << endl;
    //     break;
    // }

    return 0;
}