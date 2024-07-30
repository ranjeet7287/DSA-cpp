#include<iostream>
#include "student.cpp"
using namespace std;

int main()
{
    // Calling Deafult Constructor
    Student s1;
    Student *s2=new Student;
    
    s1.display();
    s2->display();

    // Paramterised Constructor with passing a rollNo as parameter
    Student s3(101);
    s3.display();

    Student *s4=new Student(102);
    s4->display();

    // Paramterised Constructor with passing a rollNo and age  as parameter
    Student s5(19,103);
    s5.display();

    Student *s6=new Student(19,104);
    s6->display();


    // Default Copy Constructor
    Student s(s5);
    s.display();

    Student t(*s6);
    t.display();

    Student *q=new Student(*s6);
    Student *r=new Student(s);

    // Default Copy Assigment Operator(=)
    Student y(10,123);
    Student x(20,1234);

    Student *j=new Student();
    y=x;
    *j=x;
    y.display();
    j->display();


    delete s2;
    delete s4;
    delete s6;
    delete q;
    delete r;
    delete j;


    
}