// When we need same type of class with diffrent data type so we use template 

#include<iostream>
using namespace std;

template <typename T,typename V>

class Pairs
{
    private:
    T x;
    V y;

    public:
    void setX(T x)
    {
        this->x=x;
    }

    T getX(){
        return x;
    }

    void setY(V y){
        this->y=y;
    }

    V getY(){
        return y;
    }
};

int main()
{
    // Pairs<int> p1;
    Pairs<int,char> p1;
    p1.setX(1);
    p1.setY('a');
    cout<<p1.getX()<<endl;
    cout<<p1.getY();
}
