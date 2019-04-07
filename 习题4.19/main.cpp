#include <iostream>

using namespace std;

int main()
{
    int largest=0;
    int larger=0;
    unsigned int numberCounter=1;
    while(numberCounter<=10)
    {
        int number;
        cout<<"Enter number:";
        cin>>number;
        if(number>largest)
        {
            larger=largest;
            largest=number;
        }
        else if(number>larger)
        {
            larger=number;
        }
        numberCounter=numberCounter+1;
    }
    cout<<"The largest is"<<largest;
    cout<<"The larger is"<<larger;
}
