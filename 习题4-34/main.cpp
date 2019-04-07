#include <iostream>

using namespace std;

int main()
{
    int n;
    int factorial=1;
    cout<<"Enter the n:";
    cin>>n;
    while(n>0)
    {
        factorial*=n;
        n--;
    }

    cout<<"The product is"<<factorial;
}
