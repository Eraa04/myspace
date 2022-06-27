// ARRAY OF OBJECTS & PASSING OBJECTS AS FUNCTION ARGUMENTS
#include<iostream>
using namespace std;

class Employee{
    int id;
    int salary;
    public:
        void setId(void){
            salary=500;
            cout<<"Enter the id of employee "<<endl;
            cin>>id;
        }
        void getId(void){
            cout<<"The id of this employee is "<<id<<endl;
        }
};
int main(){
    // Employee era,niya,riya,kiya;
    // era.setId();
    // era.getId();
    Employee fb[4];
    for (int i = 0; i < 4; i++)
    {
       fb[i].setId();
       fb[i].getId();
    }
    
    return 0;
}