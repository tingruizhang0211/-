#include <iostream>

using namespace std;

int main()
{
    int x;
    int y;
    int z;
    int result1;
    int result2;
    int result3;
    int max;
    int min;

    cout<<"Enter three integers:";
    cin>>x>>y>>z;
    result1=x+y+z;
    cout<<result1<<endl;
    result2=(x+y+z)/3;
    cout<<result2<<endl;
    result3=x*y*z;
    cout<<result3<<endl;

    max=x;
    min=x;
    if(min>y)
        min=y;
    if(min>z)
        min=z;
    if(max<y)
        max=y;
    if(max<z)
        max=z;
    cout<<min<<endl;
    cout<<max<<endl;
}

