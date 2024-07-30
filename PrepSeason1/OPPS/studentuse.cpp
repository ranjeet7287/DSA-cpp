#include<iostream>
using namespace std;
#include "student.cpp"


int main()
{
    // Create object satatically
    Student s1;

    // Dynamically
    Student *s2=new Student;

    //Set the property to object 
    // satically object
    s1.rollNo=1024;
    // s1.age=19;
    s1.getAge();


    // Dynamic object
    (*s2).rollNo=1025;
    // (*s2).age=19;
    // (*s2).marks=450;
    s2->getAge();

    s1.display();
    s2->display();

}