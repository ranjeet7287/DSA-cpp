#include<iostream>
#include<cstring>
using namespace std;

class Student
{
    private:
    int age;
    // char *name;

    public:
    
    char *name;
    
    Student(int age,char *name)
    {
        this->age=age;
        // Deep Copy
        this->name=new char[strlen(name)+1];
        strcpy(this->name,name);
    }

    void display()
    {
        cout<<name<<" "<<age<<endl;
    }

    // Copy Constructor
    Student(Student const &s)
    {
        this->age=s.age;
        this->name=new char[strlen(s.name)+1];
        strcpy(this->name,s.name);
    }

};

int main()
{
    char name[]="Gravity";
    Student s1(19,name);
    s1.display();
    
    Student s2(s1);
    s2.display();

    s2.name[0]='x';
    s2.display();
    s1.display();
}