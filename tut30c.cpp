/* PARAMETERIZED AND DEFAULT CONSTRUCTORS
WAP to compute distance between two points in a cartesian plane */
#include<iostream>
#include<cmath>
using namespace std;

class Point{
    int x,y;
    friend void Dist(Point p1,Point p2);
    public:
        Point(int a,int b){
            x=a;
            y=b;

        }
        void displayPoint(){
            cout<<"The point is ("<<x<<","<<y<<")"<<endl;
        }
};
void Dist(Point p1, Point p2){
	double result;
	// result = sqrt(((p2.x - p1.x)*(p2.x - p1.x))+((p2.y - p1.y)*(p2.y - p1.y)));
	result = sqrt(pow((p2.x - p1.x),2)+ pow((p2.y - p1.y),2));
	cout<<result;
}
// to do the square of a number we can use pow to the power we want.

int main(){
    Point p1(8,11);
    p1.displayPoint();

    Point p2(32,20);
    p2.displayPoint();

    Dist(p1,p2);
    return 0;
}