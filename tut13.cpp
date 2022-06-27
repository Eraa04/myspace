// ARRAYS & POINTERS
#include<iostream>
using namespace std;

int main(){
    int marks[4]={23,45,67,89};
    
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;

    // marks[2]=12;
    // cout<<marks[2]<<endl;
    // cout<<marks[0]<<endl;

    // for (int i = 0; i < 4; i++)
    // {
    //   cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    // }

    // int i=0;
    // while (i<4)
    // {
    //     cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    //     i++;
    // }

    // pointers and arrays
    int*p=marks;
    /* (=> unlike for variables,to store the address of an array into any
    pointer no need to use '&')*/
    cout<<"The value of marks[0] is "<<*p<<endl;
    // (by default prints the starting address of the given array)
    cout<<"The value of marks[1] is "<<*(p+1)<<endl;
    cout<<"The value of marks[2] is "<<*(p+2)<<endl;
    cout<<"The value of marks[3] is "<<*(p+3)<<endl;

    cout<<*(p++);
    cout<<*(p);
    cout<<*(++p);
    cout<<endl;
    cout<<"The value of *p is "<<*p<<endl;
    cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
    cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
    cout<<"The value of *(p+3) is "<<*(p+3)<<endl;
    
    
    return 0;
}