#include <iostream>

using namespace std;

int Reverse(int);

int main()
{
    int number;
    cout<<"Enter the integer:";
    cin>>number;
    cout<<"The reversed number is"<<Reverse(number)<<endl;
}

int Reverse(int a)
{
    int h,j,k,l,m;
    h=a/1000;
    j=(a-h*1000)/100;
    k=(a-h*1000-j*100)/10;
    l=a%10;
    m=l*1000+k*100+j*10+h;
    return m;
}
