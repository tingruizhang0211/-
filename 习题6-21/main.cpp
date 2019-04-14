#include <iostream>

using namespace std;

int iseven(int);

int main()
{
    while(int number=1)
    {
        cout<<"Enter the integer:"<<endl;
        cin>>number;
        cout<< "The result is   "<<iseven(number)<<endl;
    }
}
int iseven(int x)
{

    if(x%2==0)
        return true;
    else
        return false;


}
