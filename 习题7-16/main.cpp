#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    const long rolls=3600;
    const int Size=13;

    int expected[Size]={0,0,1,2,3,4,5,6,5,4,3,2,1};
    int x;
    int y;
    int sum[Size]={};

    srand(time(0));

    for(long i=1;i<=rolls;i++)
    {
        x=1+rand()%6;
        y=1+rand()%6;
        sum[x+y]++;
    }
    cout<<setw(8)<<"Sum"<<setw(8)<<"Total"<<setw(8)<<"Expected"<<setw(8)<<"Actual\n"<<fixed<<showpoint;
    for(int j=2;j<Size;j++)
        cout<<setw(8)<<j<<setw(8)<<sum[j]<<setprecision(3)<<setw(8)<<100*expected[j]/36<<"%"<<setprecision(3)<<setw(8)<<100*sum[j]/rolls<<"%\n"<<endl;
}
