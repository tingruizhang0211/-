#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int c;
    int d;
    int e;
    int max;
    int min;

    cout<<"Enter five integers:";
    cin>>a>>b>>c>>d>>e;
    max=a;
    min=a;
    if(max<b)
        max=b;
    if(max<c)
        max=c;
    if(max<d)
        max=d;
    if(max<e)
        max=e;
    if(min>b)
        min=b;
    if(min>c)
        min=c;
    if(min>d)
        min=d;
    if(min>e)
        min=e;
    cout<<max<<endl;
    cout<<min<<endl;
}
