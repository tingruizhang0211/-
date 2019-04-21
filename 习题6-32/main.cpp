#include <iostream>

using namespace std;


int qualityPoints(double);

int main()
{
    double grade;
    cout<<"Enter the grade:"<<endl;
    cin>>grade;
    cout<<"The result is"<<qualityPoints(grade)<<endl;
}

int qualityPoints(double a)
{
    if(a>=90&&a<=100)
        return 4;
    if(a>=80&&a<=89)
        return 3;
    if(a>=70&&a<=79)
        return 2;
    if(a>=60&&a<=69)
        return 1;
    if(a<=60)
        return 0;
}
