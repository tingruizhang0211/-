#include <iostream>

using namespace std;

int main()
{
    int a;
    int result;

    cout<<"Enter one integer:";
    cin>>a;
    result=a%2;
    if(result==0)
        cout<<"even number"<<endl;
    if(result!=0)
        cout<<"odd number"<<endl;
}

