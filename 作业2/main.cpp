#include <iostream>

using namespace std;

int main()
{
    int x;
    int a=3.14159;
    int result1;
    int result2;
    int result3;
    std::cout<<"Enter one integer:";
    std::cin>>x;
    result1=2*x;
    result2=2*a*x;
    result3=a*x^2;
    std::cout<<"The product is"<<result1;
    std::cout<<"The product is"<<result2;
    std::cout<<"The product is"<<result3<<endl;
}
