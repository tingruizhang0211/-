#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>


class Employee
{
    public:
        Employee(const std::string&,const std::string&,const std::string&);
        virtual ~Employee(){};
        void setFirstName(const std::string&);
        std::string getFirstName() const;
        void setLastName(const std::string&);
        std::string getLastName() const;
        void setSocialSecurityNumber(const std::string&);
        std::string getSocialSecurityNumber() const;
        void setBirthDate(const std::string&);
        std::string getBirthDate() const;
    private:
        std::string firstName;
        std::string lastName;
        std::string socialSecurityNumber;
        std::string birthDate;
};

#endif // EMPLOYEE_H
