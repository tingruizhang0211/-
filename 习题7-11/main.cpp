#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const size_t countsSize=10;
    array<int,countsSize>counts;
    for(size_t h=0;h<counts.size();++h)
        counts[h]=0;
    for(size_t l=0;l<counts.size();++l)
        cout<<setw(8)<<l<<setw(12)<<counts[l]<<endl;

    const size_t bonusSize=15;
    array<int,bonusSize>bonus={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    for(int i=0;i<bonus.size();++i)
        bonus[i]=i+1;
    for(int j=0;j<bonus.size();++j)
        cout<<setw(7)<<j<<setw(13)<<bonus[j]<<endl;


    const size_t monthlyTemperaturesSize=12;
    array<double,monthlyTemperaturesSize>monthlyTemperatures={21,22,23,24,25,26,27,28,29,30,31,32};
    for(size_t k=1;k<monthlyTemperatures.size();++k)
        cout<<setw(8)<<k<<setw(12)<<monthlyTemperatures[k];

    const size_t bestScoresSize=5;
    array<int,bestScoresSize>bestScores={112,113,114,115,116};
    for(size_t m=0;m<bestScores.size();++m)
    cout<<"\n"<<bestScores[m];


}
