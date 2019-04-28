#include <iostream>
#include <iomanip>
#include <array>

using namespace std;

int main()
{
    const int arraySize=20;
    array<int,arraySize>array={};
    int value;
    int a=0;
    int b;
    cout<<"Enter 20 integers between 10 and 100:\n";
    for(int i=0;i<array.size();)
        {
            b=0;
            cin>>value;
            if(value>=10&&value<=100)
            {
                for(int j=0;j<a;j++)
                {
                    if(value==array[j])
                    {
                        b=1;
                        break;
                    }
                }
                if(!b)
                {
                    array[a++]=value;
                    ++i;
                }
                else
                    cout<<"Duplicate number.\n";
            }
            else
                cout<<"Invalid number.\n";
        }
        cout<<"\nThe nonduplicate values are:\n";
        for(int i=0;i<array.size();i++)
            cout<<array[i]<<endl;

}


