#include <iostream>

using namespace std;

int main()
{
    double number;
    double a;
    double b;
    a=number+number;
    b=number-number;
    unsigned int counter=0;
    while(counter<3)
    {
        cout<<"Enter the number:";
        cin>>number;
        counter=counter+1;
    }
    if(a>number&&b<number)
        cout<<"Yes!";
    else
        cout<<"No!";

}
