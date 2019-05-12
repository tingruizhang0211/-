#include <iostream>
#include <string>
using namespace std;

class Complex
{
public:
    Complex(double realPart,double imaginaryPart)
    {
        realpart=realPart;
        imaginarypart=imaginaryPart;
    }
    double getrealPart()
    {
        return realpart;
    }
    double getimaginaryPart()
    {
        return imaginarypart;
    }
    void setrealPart(double x)
    {
        realpart=x;
    }
    void setimaginaryPart(double y)
    {
        imaginarypart=y;
    }
private:
    double realpart;
    double imaginarypart;
};

int main()
{
    Complex complex1(8,18);
    Complex complex2(2,11);
    cout<<"("<<complex1.getrealPart()<<","<<complex1.getimaginaryPart()<<")";
    cout<<"\n("<<complex2.getrealPart()<<","<<complex2.getimaginaryPart()<<")";

    double a,b,c,d;
    a=complex1.getrealPart();
    b=complex2.getrealPart();
    c=complex1.getimaginaryPart();
    d=complex2.getimaginaryPart();
    cout<<"\nÏà¼Ó"<<"("<<a+b<<","<<c+d<<")";
    cout<<"\nÏà¼õ"<<"("<<a-b<<","<<c-d<<")";
    cout<<endl;
}

