#include <iostream>
#include <iomanip>
#include <array>

using namespace std;

int main()
{
    double total=0;
    array<int,6>alphabet;
    for(size_t i=0;i<alphabet.size();++i)
        alphabet[i]=2*i;
    for(size_t j=0;j<alphabet.size();++j)
        cout<<setw(7)<<j<<setw(13)<<alphabet[j]<<endl;

    array<double,4>grades={1.1,1.2,1.3,1.4};
    for(size_t k=0.0;k<grades.size();++k)
        cout<<setw(7)<<k<<setw(13)<<grades[k]<<endl;

    array<int,5>values={8,8,8,8,8};
    for(size_t g=0;g<values.size();++g)
        cout<<setw(7)<<g<<setw(13)<<values[g]<<endl;

    array<double,100>temperatures;
    for(size_t l=0.0;l<temperatures.size();++l)
        total +=temperatures[l];
    cout<<setw(7)<<total;

    const size_t aSize=11;
    const size_t bSize=34;
    const array<unsigned int,aSize>a={};
    array<unsigned int,bSize>b={};
    for(size_t n=0;n<a.size();++n)
        ++b[a[n]];
    for(size_t h=1;h<b.size();++h)
        cout<<"\n"<<b[h];

    array<double,99>w;
    for(size_t f=1;f<w.size();++f)
    {
        int lowest;
        int highest;
        if(f<lowest)
            lowest=f;
        return lowest;
        if(f>highest)
            highest=f;
        return highest;
        cout<<setw(7)<<w[f];
    }
}
