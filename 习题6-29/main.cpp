#include <iostream>

using namespace std;

int primeNumber(int);

int main()
{
    int number;
    cout<<"Enter the integer:"<<endl;
    cin>>number;
    cout<<primeNumber(number)<<" is a prime number"<<endl;
}

int primeNumber(int a)
{
    int d;
    for(int i=2;i<=a/2;i++)
    {
        d=a%i;
    }
    if(d==0)
        return false;
    else
        return a;
}
