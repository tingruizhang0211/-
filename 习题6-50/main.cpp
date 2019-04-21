#include <iostream>

using namespace std;

int tripleByValue(int);
void tripleByReference(int &);

int main()
{
    int x;
    int y;
    cout<<"x=";
    cin>>x;
    cout<<"The result is"<<tripleByValue(x)<<endl;

    cout<<"y=";
    cin>>y;
    cout<<"The result is"<<endl;
    tripleByReference(y);
    cout<<y;
}

int tripleByValue(int number)
{
    return number*3;
}
void tripleByReference(int &numberRef)
{
     numberRef*3;
}
