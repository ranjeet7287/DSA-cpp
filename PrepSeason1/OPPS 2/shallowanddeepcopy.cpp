#include<iostream>
#include<cstring>
using namespace std;

class Student
{
    private:
    int age;
    char *name;

    public:
    
    Student(int age,char *name)
    {
        this->age=age;

        // Shallow copy -> Just copying the address of first location of an array
        // this->name=name;


        // Deep Copy
        this->name=new char[strlen(name)+1];
        strcpy(this->name,name);
        
    }

    void display()
    {
        cout<<name<<" "<<age<<endl;
    }

};

int main()
{
    char name[]="Gravity";
    Student s1(19,name);
    s1.display();

    name[0]='B';
    Student s2(0,name);
    s2.display();

    s1.display();
}