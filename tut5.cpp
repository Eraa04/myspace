// BASIC I/O
#include<iostream>

using namespace std;
int main(){
    int num1, num2;
    cout<<"Enter the value of num1: \n";/*this is called Insertion operator*/
    cin>>num1; /*this is called the Extraction operator*/

    cout<<"Enter the value of num2: \n";/*this is called Insertion operator*/
    cin>>num2; /*this is called the Extraction operator*/

    cout<<"The sum is "<< num1+num2;
        return 0;
}