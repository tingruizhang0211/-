#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

void flip(void);

int main()
{
    flip();
}

void flip(void)
{
    cout<<"Head\tTail\n"<<endl;
    unsigned int frequency1=0;
    unsigned int frequency2=0;
    for(unsigned int Throw=1;Throw<=100;++Throw)
    {
        unsigned int result=1+rand()%2;
        switch(result)
        {
        case 1:
            ++frequency1;
            break;
        case 2:
            ++frequency2;
            break;
        default:
            cout<<"Program should never get here!"<<endl;
        }
    }
    cout<<frequency1<<setw(10)<<frequency2<<endl;

}
