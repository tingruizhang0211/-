#include <iostream>
using namespace std;

int integerPower(int,int);

int main()
{
    int base;
    int exponent;
    cout<<"Enter base:";
    cin>>base;
    cout<<"\nEnter exponent:";
    cin>>exponent;
    cout<<"\nThe result is "<< integerPower (base,exponent) <<endl;
}
int integerPower(int x,int y)
{
    int product=1;
    for(int i=1;i<=y;i++)
    {
        product*=x;
    }
    return product;
}

