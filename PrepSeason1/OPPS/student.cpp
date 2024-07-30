#include<iostream>
using namespace std;

class Student{
    public:
    int rollNo;
    
    private:
    int age;

    public:

    // Deafult Constructor
    Student()
    {
     cout<<"Constructor call"<<endl;   
    }

    // Parameterized Constructor
    Student(int r){
        cout<<"Parameterized Constructo"<<endl;
        rollNo=r;
    }

    // Student(int a,int r){
    //     cout<<"Parameterized Constructor"<<endl;
    //     age=a;
    //     rollNo=r;
    // }

    // if we using same of parameter as the property name so we diffreniate them using this keyword
    Student(int rollNo,int age){

        // Wrong Way
        // rollNo=rollNo;
        // age=age;

        // Right way
        this->rollNo=rollNo;
        this->age=age;
    }

    // Desturctor
    ~Student(){
        cout<<"Destructor"<<endl;
    }



    void display(){
        // We can access private property within the class
        cout<<rollNo<<" "<<age<<endl;
    }
    // getter and setter
    int getAge(){
        return age;
    }
    void setAge(int a){
        age=a;
    }
}; 
