#include <iostream>

using namespace std;

int main()
{
    int *number;
    cout<< *number<<endl;

    double *realPtr;
    double *integerPtr;
    realPtr=integerPtr;

    char s[]="this is a character array";
    for(;*s!='\0';++*s)
            cout<<*s<<' ';
    int* x,* y;
    x=y;

    short *numPtr,result;
    short *genericPtr=&numPtr;
    result=genericPtr+7;

    double x=19.34;
    double *xPtr=&x;
    cout<<*xPtr<<endl;
}
