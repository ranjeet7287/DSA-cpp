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
    Fraction add(Fraction const &f)
    {
        int lcm=this->denominator*f.denominator;

        int x=this->numerator*f.denominator;
        int y=this->denominator*f.numerator;
        int num=x+y;
        
        //creating new fraction
        Fraction fnew(num,lcm);        

        fnew.simplfy();
        return fnew;
    }


    // operator overloading f3=f1+f2;
    Fraction operator+(Fraction const &f) const
    {
        int lcm=this->denominator*f.denominator;

        int x=this->numerator*f.denominator;
        int y=this->denominator*f.numerator;
        int num=x+y;
        
        //creating new fraction
        Fraction fnew(num,lcm);        

        fnew.simplfy();
        return fnew;
    }

    Fraction operator*(Fraction const &f)const {
        int num=this->numerator*f.numerator;
        int deno=this->denominator*f.denominator;
        
        Fraction fnew(num,deno);   
        fnew.simplfy();
        return fnew;
    }
    
    bool operator==(Fraction const &f)const
    {
        return (this->numerator==f.numerator && this->denominator == f.denominator);
    }
    void multiply(Fraction const &f)
    {
        this->numerator=this->numerator*f.numerator;
        this->denominator=this->denominator*f.denominator;
        simplfy();
    
    }

    // Overloding 2
    // Pre-increment
    // void operator++(){
    //     numerator=numerator+denominator;
    //     simplfy();

    // }
    // Pre-increment
    Fraction& operator++(){
        this->numerator=this->numerator+this->denominator;
        simplfy();
        return *this;
    }

    // Post  Increment
    Fraction operator++(int){
        Fraction fnew(numerator,denominator);
        numerator=numerator+denominator;
        simplfy();
        fnew.simplfy();
        return fnew;
    }


    Fraction& operator+=(Fraction const &f)
    {
        int lcm=this->denominator*f.denominator;

        int x=this->numerator*f.denominator;
        int y=this->denominator*f.numerator;
        int num=x+y;
        numerator=num;
        denominator=lcm;    
        simplfy();
        return *this;
    }
};

int main()
{
    Fraction f1(10,2);
    Fraction f2(15,4);

    (f1+=f2)+=f2;
    f1.print();
    f2.print();


    // Fraction f3=f1++;
    // f1.print();
    // f3.print();

    // f1.print(); // 10/2
    // ++f1;
    // f1.print(); // 6/1

    // Fraction f3=++f1;
    // f3.print(); // 6/1 + 1 --> 7/1 

    // f1.print();
    // ++(++f1);
    // f1.print();

    // Fraction f4=++(++f1);
    // f3.print();




}

