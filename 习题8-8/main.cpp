#include <iostream>

using namespace std;
int main()
{
    unsigned int values[5]={2,4,6,8,10};
    for(size_t offset1=0;offset1<5;++offset1)
    {
        cout<<"values["<<offset1<<"]="<<values[offset1]<<"\t"<<endl;
    }

    unsigned int *vPtr=&values[5];
    cout<<"\n"<<*vPtr<<endl;

    for(size_t offset2=0;offset2<5;++offset2)
    {
        cout<<"\n"<<"*(values+"<<offset2<<")="<<*(values+offset2)<<endl;
    }
}
