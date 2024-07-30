#include <iostream>
using namespace std;

class Student{
    public :
    char *name;
    int rollNo;
    Student(int num){
        rollNo = num;
    }

    void print(){
        cout << rollNo;
    }
};

int main() {
    Student s(12);
    s.print();
}
// ####Constructor is called when an object is created, here when we create a 
// Student object, corresponding student 
// object is created and rollNo is assigned to 12. So output is 12.