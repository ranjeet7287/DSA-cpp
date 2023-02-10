#include <iostream>
using namespace std;

class Box{
    public :
    int width;
    int height;
    int length;
    void volume(){
        cout << length * width * height;
    }
};

int main() {
    Box b;
    b.height = 5;
    b.width = 4;
    b.volume();
}

// ####Height and width are initialised to 5 and 4 respectively 
// but length is not initialised. Default value for an integer data member 
// of a class is garbage value, hence 
// length contains garbage value. Volume will thus be garbage value.