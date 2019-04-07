#include <iostream>

using namespace std;

int main()
{
    int largest=0;
    unsigned int numberCounter=1;
    while(numberCounter<=10)
    {
        int number;
        cout<<"Enter number:";
        cin>>number;
        if(number>largest)
            largest=number;
        numberCounter=numberCounter+1;
    }
    cout<<"The largest is"<<largest;

}
