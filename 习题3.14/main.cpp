#include <iostream>
#include <string>
using namespace std;

class Employee
{
public:
    Employee(string Name ,string Surname,int Salary){
    name=Name;
    surname=Surname;

    if(Salary<0)
        salary=0;
    else
        salary=Salary;
    };
    string getName(){
        return name;
    }
    string getSurname(){
        return surname;
    }
    int getSalary(){
        return salary;
    }

    void setName(string s){
        name=s;
    }
    void setSurname(string s){
        surname=s;
    }
    void setSalary(int n){
        if(n<0) salary=0;
        else
            salary=n;
    }


private:
    string name;
    string surname;
    int salary;
};
int main()
{
    Employee employee1("Mary","White",5500);
    Employee employee2("Lisa","Robert",6500);
    cout<<employee1.getName()<<" yearly salary:"<<employee1.getSalary()<<endl;
    cout<<employee2.getName()<<" yearly salary:"<<employee2.getSalary()<<endl;

    int t;
    t=employee1.getSalary();
    t=t*1.1;
    employee1.setSalary(t);
    int m;
    m=employee2.getSalary();
    m=m*1.1;
    employee2.setSalary(m);

    cout<<employee1.getName()<<" yearly salary:"<<employee1.getSalary()<<endl;
    cout<<employee2.getName()<<" yearly salary:"<<employee2.getSalary()<<endl;

    return 0;
}
