#include <iostream>

using namespace std;

int main()
{
    int side1;
    int side2;
    int side3;
    int a;
    int b;
    int c;
    cout<<"Enter the side1:";
    cin>>side1;
    a=side1*side1;
    cout<<"Enter the side2:";
    cin>>side2;
    b=side2*side2;
    cout<<"Enter the side3:";
    cin>>side3;
    c=side3*side3;
    if(c==a+b)
        cout<<"Yes!";
    else if(a==b+c)
        cout<<"Yes!";
    else if(b==a+c)
        cout<<"Yes!";
}
