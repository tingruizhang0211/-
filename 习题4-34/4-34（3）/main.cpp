#include <iostream>

using namespace std;

int main()
{
    int number=1;
    int factorial=1;
    int accuracy;
    int x;
    double e=1;
    double exponent=1;
    cout<<"Enter the accuracy of e:";
    cin>>accuracy;
    cout<<"Enter the exponent:";
    cin>>x;
    while(number<accuracy)
    {
        exponent*=x;
        factorial*=number;
        e+=exponent/factorial;
        number++;
    }
    cout<<"e to the "<<x<<"is"<<e;

}
