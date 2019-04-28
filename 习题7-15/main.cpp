#include <iostream>
#include <array>

using namespace std;

const size_t rows=3;
const size_t columns=5;
void printArray(const array<array<int,columns>,rows>&);
int main()
{
    array<array<int,columns>,rows>sales={16,27,34,46,51,66,70,88,92,10,11,12,13,14,15};
    cout<<"Values in t by row are:"<<endl;
    printArray(sales);
    for(size_t row=0;row<sales.size();++row)
        for(size_t columns=0;columns<sales[row].size();++columns)
            sales[row][columns]=0;
}
void printArray (const array<array<int,columns>,rows>&a)
{
     for(auto const &row :a)
    {
        for(auto const&element :row)
            cout<<element<<' ';
        cout<<endl;
    }

}
