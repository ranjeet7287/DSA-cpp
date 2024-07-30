
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
    Pairs<Pairs<int,int>,int> p1;
    
    Pairs<int,int> p2;
    p2.setX(1);
    p2.setY(2);

    p1.setX(p2);
    p1.setY(3);

    cout<<p1.getX().getX()<<endl; // 1
    cout<<p1.getX().getY()<<endl; // 2
    cout<<p1.getY()<<endl; // 3
}
