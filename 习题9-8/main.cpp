#include <iostream>
#include "Date.h"

using namespace std;

int main()
{
    Date nextDay(8,18,1988);
    int a,b;
    a=nextDay.getMonth();
    b=nextDay.getYear();
    cout<<a+1<<","<<nextDay.getDay()<<","<<nextDay.getYear();
    cout<<a<<","<<nextDay.getDay()<<","<<b+1;
    cout<<endl;
}
