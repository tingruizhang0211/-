#include <iostream>

using namespace std;

class Rectangle
{
public:
    Rectangle(double Length=1,double Width=1)
    {
        length=Length;
        width=Width;

    }
    double getLength()
    {
        return length;
    }
    double getWidth()
    {
        return width;
    }
    void setLength(double a)
    {
        length=a;
    }
    void setWidth(double b)
    {
        width=b;
    }
private:
    double length;
    double width;

};
int main()
{
    Rectangle rectangle(2,3);
    double perimeter;
    double area;
    double a,b;
    a=rectangle.getLength();
    b=rectangle.getWidth();
    perimeter=2*(a+b);
    area=a*b;
    cout<<"The perimeter is:"<<perimeter<<"\nThe area is:"<<area;
    cout<<endl;

}
