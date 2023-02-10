#include<iostream>
using namespace std;

class Fraction{
    
    private:
    int numerator;
    int denominator;

    public:
    Fraction(int numerator,int denominator)
    {
        this->numerator=numerator;
        this->denominator=denominator;
    }
    
    void print()
    {
        cout<<numerator<<" / "<<denominator<<endl;
    }

    void simplfy()
    {
        int gcd=1;
        int j=min(this->numerator,this->denominator);
        for(int i=1;i<=j;i++)
        {
            if(this->numerator % i == 0 && this->denominator % i == 0)
            {
                gcd=i;
            }
        }

        this->numerator=this->numerator/gcd;
        this->denominator=this->denominator/gcd;

    }

    void add(Fraction const &f)
    {
        int lcm=this->denominator*f.denominator;

        int x=this->numerator*f.denominator;
        int y=this->denominator*f.numerator;
        
        this->numerator=x+y;
        this->denominator=lcm;

        simplfy();
    }

    void multiply(Fraction const &f)
    {
        this->numerator=this->numerator*f.numerator;
        this->denominator=this->denominator*f.denominator;
        simplfy();
    
    }

};



int main()
{
    Fraction f1(10,2);
    Fraction f2(15,4);
    
    f1.add(f2);
    f1.print();

    f1.multiply(f2);
    f1.print();


}

