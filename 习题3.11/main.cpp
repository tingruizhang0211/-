#include <iostream>
#include <string>
using namespace std;

class GradeBook
{
public:
    GradeBook(string name1,string name2)
    {
        setCourseName(name1);
        setTeachersName(name2);
    }
    void setCourseName(string name1)
    {
        CourseName=name1;
    }
    string getCourseName() const
    {
        return CourseName;
    }
    void setTeachersName(string name2)
    {
        TeachersName=name2;
    }
    string getTeachersName() const
    {
        return TeachersName;
    }
    void displayMessage() const
    {
        cout<<"Welcome to the grade book for\n:"<<getCourseName()<<"!"<<endl;
        cout<<"The course is presented by:"<<getTeachersName()<<endl;
    }
private:
    string CourseName;
    string TeachersName;
};
int main()
{
    GradeBook myGradeBook("C++","Mr Smith");
    myGradeBook.displayMessage();
}
