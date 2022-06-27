// PARAMETERIZED AND DEFAULT CONSTRUCTORS
#include<iostream>
using namespace std;

class Point{
    int x,y;
    public:
        Point(int a,int b){
            x=a;
            y=b;

        }
        void displayPoint(){
            cout<<"The point is ("<<x<<","<<y<<")"<<endl;
        }
};
int main(){
    Point p(0,0);
    p.displayPoint();
    
    return 0;
}