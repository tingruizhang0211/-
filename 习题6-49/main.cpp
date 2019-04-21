#include <iostream>

using namespace std;

inline double circleArea(double a)
{
    return 3.14*a*a;
}

int main()
{
    double r;
    cout<<"Enter the r:";
    cin>>r;
    cout<<"The area is "<<circleArea(r)<<endl;
}
