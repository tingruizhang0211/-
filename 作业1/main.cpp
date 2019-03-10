#include <iostream>

using namespace std;

int main()
{
    int number1;
    int number2;
    int result1;
    int result2;
    int result3;
    int result4;
    std::cout<<"Enter two integers:";
    std::cin>>number1>>number2;
    result1=number1+number2;
    result2=number1-number2;
    result3=number1*number2;
    result4=number1/number2;
    std::cout<<"The product is"<<result1;
    std::cout<<"The product is"<<result2;
    std::cout<<"The product is"<<result3;
    std::cout<<"The product is"<<result4<<endl;
}
