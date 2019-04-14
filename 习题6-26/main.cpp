#include <iostream>

using namespace std;

int celsius(double);
int fahrenheit(double);

int main()
{
    cout<<"Celsius\tFahrenheit\n";
    for(int i=1;i<=100;i++)
    {
        double number1;
        cout<<number1<<"\t"<<celsius(number1)<<"\n"<<endl;
    }
    for(int j=32;j<=212;j++)
    {
        double number2;
        cout<<fahrenheit(number2)<<"\t"<<number2<<endl;
    }
}

int celsius(double a)
{
    return a*9/5+32;
}
int fahrenheit(double b)
{
    return (b-32)*5/9;
}
