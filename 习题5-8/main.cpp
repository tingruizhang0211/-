#include <iostream>

using namespace std;

int main()
{
    int number;
    int value;
    int smallest;
    cout<<"Enter the number:"<<"followed by values:\n";
    cin>>number;
    for(int i=1;i<=number;i++)
    {
        cin>>value;
        if(value<=smallest)
            smallest=value;
    }
    cout<<"The smallest is"<<smallest;
}
