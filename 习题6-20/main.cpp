#include <iostream>

using namespace std;

int multiple(int,int);

int main()
{
    int integer1;
    int integer2;
    cout<<"Enter the first integer:";
    cin>>integer1;
    cout<<"\nEnter the second integer:";
    cin>>integer2;
    cout<<"\nThe result is"<<multiple(integer1,integer2);

}
int multiple(int x,int y)
{
    if(y%x==0)
        return true;
    else
        return false;
}
