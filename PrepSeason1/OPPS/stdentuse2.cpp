#include<iostream>
#include "student.cpp"
using namespace std;

int main()
{
    Student s1;
    Student *s2=new Student;
    
    s1.rollNo=1;
    s2->rollNo=2;

    s1.setAge(15);
    s2->setAge(19);

    s1.display();
    s2->display();
}