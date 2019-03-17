#include <iostream>

using namespace std;

int main()
{
    int x;
    int y;

    cout<<"Enter two integers to compare:";
    cin>>x>>y;
    if(x>y)
        cout<<x<<"is large"<<endl;
    if(y>x)
        cout<<y<<"is large"<<endl;
    if(x==y)
        cout<<"These numbers are equal."<<endl;
}
