#include <iostream>
#include <array>
using namespace std;

const size_t row=2;
const size_t columns=3;
void printArray(const array<array<int,columns>,row>&);

int main()
{
    array<array<int,columns>,row>t={};
    cout<<endl;
    printArray(t);
}

void printArray(const array<array<int,columns>,row>&a)
{
    for(auto const &row:a)
    {
        for(auto const &element:row)
            cout<<element<<' ';
        cout<<endl;
    }
}
