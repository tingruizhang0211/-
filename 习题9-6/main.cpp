#include <iostream>
#include <string>


using namespace std;

class Rational
{
public:
    Rational(int Numerator,int Denominator)
    {
        numerator=Numerator;
        denominator=Denominator;
    }
    int getNumerator()
    {
        return numerator;
    }
    int getDenominator()
    {
        return denominator;
    }
    void setNumerator(int a)
    {
        numerator=a;
    }
    void setDenominator(int b)
    {
        denominator=b;
    }
private:
    int numerator;
    int denominator;
};

int main()
{
    Rational rational1(1,9);
    Rational rational2(4,9);
    cout<<rational1.getNumerator()<<"/"<<rational1.getDenominator();
    cout<<"\n"<<rational2.getNumerator()<<"/"<<rational2.getDenominator();
    int a,b,c,d;
    a=rational1.getNumerator();
    b=rational2.getDenominator();
    c=rational1.getNumerator();
    d=rational2.getDenominator();
    cout<<"\n相加"<<a+b<<"/"<<a;
    cout<<"\n相减"<<b-a<<"/"<<a;
    cout<<"\n相乘"<<a*b<<"/"<<c*d;
    cout<<"\n相除"<<a*d<<"/"<<b*c;
    cout<<endl;
}
