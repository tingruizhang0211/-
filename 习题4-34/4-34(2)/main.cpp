#include <iostream>

using namespace std;

int main()
{
    int number=1;
    int factorial=1;
    int accuracy;
    double e=1;
    cout<<"Enter the accuracy of e:";
    cin>>accuracy;
    while(number<accuracy)
    {
        factorial*=number;
        e+=1;
        number++;
    }
    cout<<"The e is"<<e;
}
