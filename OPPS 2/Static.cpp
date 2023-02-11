#include<iostream>
using namespace std;

class Student
{
    public:
    int rollNo;
    int age;
    
    private:
    static int totalStudents;


    public:
    Student()
    {
        totalStudents++;
    }

    int getrollNo() const{
        return getrollNo;
    }

    static int getTotalstudent()
    {
        return totalStudents;
    }


};
int Student :: totalStudents=0; // Initialize static data members

int main()
{
    Student s1;
    cout<<s1.rollNo<<endl;
    cout<<Student :: totalStudents<<endl; // Accessing Static property  


    cout<<s1.totalStudents<<endl; // it will not give an error but logically it's incorrect 


    // change in class which is same for every student
    s1.totalStudents=10;
    Student s2;
    cout<<Student :: totalStudents<<endl; 

    // Increment total student through constructor
    Student s3;
    Student s4;
    Student s5;
    Student s6;

    // cout<<Student ::totalStudents<<endl;

    cout<< Student::getTotalstudent()<<endl;

}