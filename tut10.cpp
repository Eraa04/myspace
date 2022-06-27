// LOOPS
#include<iostream>

using namespace std;

int main(){
// for loop in c++
/*syntax for 'for loop'
for(intialization;condition;updation)
{
    loop body (c++ code)
}
*/
for(int i=0;i<=40;i++)
{
    cout<<i<<endl;
}

// example of infinite for loop

// for(int i=1;34<=40;i++)
// {
//     cout<<i<<endl;
// }

// while loop in c++
/*syntax for 'while loop'
while(condition)
{
    c++ statements;
}
*/

// printing 1-40 using while loop
int j=0;
while(j<=40){
    cout<<j<<endl;
    j++;
}
// example of infinite while loop
// int i=1;
// while(true){
// cout<<i<<endl;
//     i++;
// }

// do-while loop
/*syntax for 'do-while loop'
do
{
    c++ statements;
} while (condition);
*/
int k=1;
do {
    cout<<k<<endl;
    k++;
} while (k<=40);

    return 0;
}