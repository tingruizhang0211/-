#include <iostream>
#include <string>
using namespace std;

class Date
{
public:
    Date(int Month,int Day,int Year)
    {
        if(1<=Month<=12)
            month=Month;
        else
            month=1;
        day=Day;
        year=Year;
    };
    int getMonth()
    {
        return month;
    }
    int getDay()
    {
        return day;
    }
    int getYear()
    {
        return year;
    }
    void setMonth(int a)
    {
        if(1<=a<=12)
            month=1;
        else
            month=a;
    }
    void setDay(int b)
    {
        day=b;
    }
    void setYear(int c)
    {
        year=c;
    }
    void diplayDate()
    {
        cout<<"a/b/c"<<getMonth()<<getDay()<<getYear()<<endl;
    }
private:
    int month;
    int day;
    int year;
};
int main()
{
    Date date(8,18,1988);
    cout<<date.getMonth()<<date.getDay()<<date.getYear()<<endl;
    return 0;
}
