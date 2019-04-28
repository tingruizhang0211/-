#include <iostream>
#include <array>
using namespace std;

const size_t row=2;
const size_t columns=3;
void printArray(const array<array<int,columns>,row>&);

int main()
{
    array<array<int,columns>,row>t={1,2,3,4,5,6};
    cout<<endl;
    printArray(t);
}

void printArray(const array<array<int,columns>,row>&t)
{
    for(size_t row=0;row<t.size();++row)
    {
        for(size_t columns=0;columns<t[row].size();++columns)
            cout<<t[row][columns]<<' ';
        cout<<endl;
    }
}

