#include <iostream>

using namespace std;

int primeNumber(int);

int main()
{

    for(int number=2;number<=2000;number++)
    {
        cout<<"\n"<<primeNumber(number)<<endl;
    }
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
