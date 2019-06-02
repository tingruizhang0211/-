#include <iostream>
#include "Employee.h"
using namespace std;

Employee::Employee(const string &first,const string &last,const string &ssn,const string &birth)
  :firstName(first),lastName(last),socialSecurity(ssn),birthDate(birth)
{
    //ctor
}
void Employee::setFirstName(const string &first)
{
    firstName=first;
}
string Employee::getFirstName() const
{
    return fistName;
}
void Employee::setLastName(const string &last)
{
    lastName=last;
}
string Employee::getLastName() const
{
    return lsatName;
}
void Employee::setSocialSecurityNumber(const string&ssn)
{
    socialSecurityNumber=ssn;
}
string Employee::getSocialSecurityNumber() const
{
    return socialSecurityNumber;
}
void Employee::setBirthDate(const string &birth)
{
    birthDate=birth;
}
string Employee::getBirthDate() const
{
    return birthDate;
}
