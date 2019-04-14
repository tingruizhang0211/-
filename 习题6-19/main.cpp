#include <iostream>
#include <cmath>

using namespace std;

int hypotenuse(double,double);

int main()
{
    double side1;
    double side2;
    cout<<"The side1 is:";
    cin>>side1;
    cout<<"\nThe side2 is:";
    cin>>side2;
    cout<<"\nThe side3 is "<< hypotenuse(side1,side2) <<endl;
}
int hypotenuse(double a,double b)
{
    return sqrt(a*a+b*b);
}
