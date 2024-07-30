#include<iostream>
using namespace std;

class Student
{
    public:
    int rollNo;
    int age;

    Student(int rollNo,int age){
        cout<<this<<endl; //  Adress of object 
        this->rollNo=rollNo;
        this->age=age;
    }
    void display()
    {
        cout<<rollNo<<" "<<age<<endl;
    }
};
int main()
{
    Student s1(1,19);
    cout<<&s1<<endl; // adress of s1 object
    s1.display(); // 1 19
}
// this -> Pointer Variable