#include<iostream>
using namespace std;

class Fraction{
    
    private:
    int numerator;
    int denominator;

    public:
    Fraction()
    {

    }

    Fraction(int numerator,int denominator)
    {
        this->numerator=numerator;
        this->denominator=denominator;
    }

    // Not changeing any property so we have to mark as constant function
    int getNumerator() const{
        return numerator;
    }
    int getDenominator() const{
        return denominator;
    }
    void setNumerator(int n)
    {
        numerator=n;
    }
    void setDenominator(int d)
    {
        denominator=d;
    }
    
    void print() const {
        cout<<numerator<<" / "<<denominator<<endl;
    }

    void simplfy() {
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

    Fraction const f3;
    cout<<f3.getNumerator()<<" "<<f3.getDenominator()<<endl; // error beacouse through the constant object we can only call constant function
    // Constant Function --> Those function which doesn't change in property of current object
    // f3.setNumerator(13);


}

