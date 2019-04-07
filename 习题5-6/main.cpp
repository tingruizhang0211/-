#include <iostream>

using namespace std;

int main()
{
    int total=0;
    int value;
    int count=0;
    cout<<"Enter the values(9999 to end):\n";
    cin>>value;
    for(;value!=9999;count++)
    {
        total+=value;
        cin>>value;;
    }
    cout<<(total/count);

}
