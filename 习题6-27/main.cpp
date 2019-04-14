#include <iostream>

using namespace std;

int Min(double,double,double);

int main()
{
    double a,b,c;
    cout<<"Enter three floating numbers:"<<endl;
    cin>>a>>b>>c;
    cout<<"The min is"<<Min(a,b,c)<<endl;
}

int Min(double x,double y,double z)
{
    double max;
    if(x>y)
        max=x;
    if(max>z)
        return max;
    else
        return z;
}
