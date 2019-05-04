#include <iostream>

using namespace std;

long exchange(long int x,long int y)
{
    y=x;
    return y;
}

int main()
{
    long int value1=200000;
    long int value2;
    long int* longPtr=&value1;
    cout<<longPtr<<endl;
    exchange(longPtr,value2);
    cout<<value2<<endl;
    printf("value1:address %p,value %d \n",&longPtr,longPtr);

    return 0;
}
