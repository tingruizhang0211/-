#include <iostream>

using namespace std;

int main()
{
    double sum=0;
    for(unsigned int i=1;i<=1000;i++)
    {

        double s;
        if(i%2==0)
            s=-1.0/(2*i-1);
        else
            s=1.0/(2*i-1);
        sum+=s;
        cout<<4*sum<<endl;
    }
    return 0;
}
