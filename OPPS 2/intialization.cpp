#include<iostream>
using namespace std;

class Student
{
    public:
    int age;
    const int rollNo;
    int &x; // age refrence 


    // Intialise list --> to intilise const and refrence or other variable
    Student(int r,int age):rollNo(r),age(age),x(this->age){
        // rollNo=r;
    }
};


int main()
{
    Student s1(101,19);
}


// for the intialtion of constant variable we use intialization list