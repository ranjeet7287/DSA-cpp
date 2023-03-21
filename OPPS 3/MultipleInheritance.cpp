#include<bits/stdc++.h>
using namespace std;

class Teacher
{
    public:
        string name;
        int age;
    
    void print()
    {
        cout<<"Teacher"<<endl;
    }    
};
class Student
{
    public:
    void print(){
        cout<<"Student"<<endl;
    }
};

class TA: public Teacher,public Student 
{
    public:
    void print(){
        cout<<" TA "<<endl;
    }
};
int main()
{
    TA a;
    a.print();             // -->TA
    a.Student ::print(); 

    a.Teacher ::name="Ranjeet";
}