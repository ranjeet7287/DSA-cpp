#include<iostream>
using namespace std;


// class Polynomial
// {
//     public:
//     int *degcoffe;
//     int capacity;


//     // Default constructor
//     Polynomial(){
//         this->degcoffe=new int[10];
//         this->capacity=10;
//         for(int i=0;i<10;i++){
//             degcoffe[i]=0;
//         }
//     }


//     //Copy Constructor
//     Polynomial(Polynomial const &p){
//         // Deep Copy creating new copy
//         degcoffe=new int[p.capacity];
//         for(int i=0;i<p.capacity;i++){
//             degcoffe[i]=p.degcoffe[i];
//         }
//         capacity=p.capacity;
//     }

//     // Copy Assigment Constructor
//     void operator=(Polynomial const &p)
//     {
//         delete[]degcoffe;
//         degcoffe=new int[p.capacity];
//         for(int i=0;i<p.capacity;i++){
//             degcoffe[i]=p.degcoffe[i];
//         }
//         capacity=p.capacity;
//     }
//     // set coffecient 
//     void setCoefficient(int degree,int coffe){
//         if(degree>capacity){
//            int newcapacity=degree;
//            int *newdeg=new int[newcapacity+1];
//            // Copy the content from original to new
//            for(int i=0;i<=capacity;i++){
//             newdeg[i]=degcoffe[i];
//            }
//            delete[]degcoffe;
//            degcoffe=newdeg;
//            capacity+=1;
//            degcoffe[degree]=coffe;
//         }else{
//             degcoffe[degree]=coffe;
//         }
//     }

//     // Print
//     void print()
//     {
//         for(int i=0;i<=this->capacity;i++)
//         {
//             if(degcoffe[i]!=0){
//                 cout<<degcoffe<<"x"<<i<<" ";
//             }
//             cout<<endl;
//         }
//     }

//     // + overload
//     Polynomial operator+(Polynomial const &p2)
//     {
//         int newcap=max(this->capacity,p2.capacity);
//         Polynomial p3(newcap);

//         for(int i=0;i<newcap;i++){
//             if(i<=capacity && i<=p2.capacity)
//                 p3.degcoffe[i]=this->degcoffe[i]+p2.degcoffe[i];
//             else if(i<=capacity)
//                 p3.degcoffe[i]=this->degcoffe;
//             else
//                 p3.degcoffe[i]=p2.degcoffe;     
//         }
//         return p3;
//     }

//     // - overload
//     Polynomial operator-(Polynomial const &p2)
//     {
//         int newcap=max(this->capacity,p2.capacity);
//         Polynomial p3(newcap);

//         for(int i=0;i<newcap;i++){
//             if(i<=capacity && i<=p2.capacity)
//                 p3.degcoffe[i]=this->degcoffe[i]-p2.degcoffe[i];
//             else if(i<=capacity)
//                 p3.degcoffe[i]=this->degcoffe;
//             else
//                 p3.degcoffe[i]=-p2.degcoffe;     
//         }
//         return p3;
//     }

//     // *overload     
//     Polynomial operator*(Polynomial const &p2)
//     {
//         int newcap=this->capacity+p2.capacity;
//         Polynomial p3(newcap);
//         for(int i=0;i<=this->capacity;i++){
//             for(int j=0;j<=p2.capacity;j++){
//                 p3.degcoffe[i+j]+=this->degcoffe[i]*p2.degcoffe[j];
//             }
//         }
//         return p3;
//     }   

// };
class Polynomial {
    
    public:
    int *degCoeff;      // Name of your array (Don't change this)
    int capacity;
    
    Polynomial(){
        this->degCoeff=new int[6];
        this->capacity=5;
    }
    //Making paramaterized constructor for defining with capacity
    Polynomial (int capacity){
        this->degCoeff=new int[capacity+1];
        this->capacity=capacity;
    }
    
    Polynomial (Polynomial const &p){
        int *newdeg=new int[p.capacity+1];
            
        for(int i=0;i<=p.capacity;i++)
            newdeg[i]=p.degCoeff[i];
            
        this->degCoeff=newdeg;
        
        this->capacity=p.capacity;
    }
    
    void setCoefficient(int deg,int coef){
        if(deg>capacity){
            int newcapacity=deg;
            int *newdeg=new int[newcapacity+1];
            //Copy the contents from original to new
            for(int i=0;i<=capacity;i++)
                newdeg[i]=degCoeff[i];
            
            this->degCoeff=newdeg;
            this->capacity=newcapacity;
            //Set the new coeff;
            degCoeff[deg]=coef;
        }
        else{
            degCoeff[deg]=coef;
        }
    }
    
    Polynomial operator+(Polynomial const &P2){
        
        int newcap=max(this->capacity,P2.capacity);
        
        Polynomial P3(newcap);
        
        for(int i=0;i<=newcap;i++){
            if(i<=capacity && i<=P2.capacity)
                P3.degCoeff[i]=this->degCoeff[i]+P2.degCoeff[i];
            else if(i<=capacity)
                P3.degCoeff[i]=this->degCoeff[i];
            else 
                P3.degCoeff[i]=P2.degCoeff[i];
        }
        
        return P3;
    }
    
    Polynomial operator-(Polynomial const &P2){
        
        int newcap=max(this->capacity,P2.capacity);
        Polynomial P3(newcap);
        
        for(int i=0;i<=newcap;i++){
            if(i<=capacity && i<=P2.capacity)
                P3.degCoeff[i]=this->degCoeff[i]-P2.degCoeff[i];
            else if(i<=capacity)
                P3.degCoeff[i]=this->degCoeff[i];
            else 
                P3.degCoeff[i]=-P2.degCoeff[i];
        }
        
        return P3;
    }
    
    Polynomial operator*(Polynomial const &P2){
        
        int newcap=this->capacity+P2.capacity;
        Polynomial P3(newcap);
        
        for(int i=0;i<=this->capacity;i++){
            
            for(int j=0;j<=P2.capacity;j++){
                P3.degCoeff[i+j]+=this->degCoeff[i]*P2.degCoeff[j];
            }
        }
        return P3;
    }
    
    void operator=(Polynomial const &p){
        int *newdeg=new int[p.capacity+1];
        //Copy the contents
        for(int i=0;i<p.capacity;i++)
            newdeg[i]=p.degCoeff[i];
            
        
        this->degCoeff=newdeg;
        
        this->capacity=p.capacity;
    }
    
    void print(){
        
        for(int i=0;i<=this->capacity;i++){
            if(degCoeff[i]!=0)
                cout<<degCoeff[i]<<"x"<<i<<" ";
        }
        cout<<endl;
    }
           
};
int main()
{
    int count1,count2,choice;
    cin >> count1;
    
    int *degree1 = new int[count1];
    int *coeff1 = new int[count1];
    
    for(int i=0;i < count1; i++) {
        cin >> degree1[i];
    }
    
    for(int i=0;i < count1; i++) {
        cin >> coeff1[i];
    }
    
    Polynomial first;
    for(int i = 0; i < count1; i++){
        first.setCoefficient(degree1[i],coeff1[i]);
    }
    
    cin >> count2;
    
    int *degree2 = new int[count2];
    int *coeff2 = new int[count2];
    
    for(int i=0;i < count2; i++) {
        cin >> degree2[i];
    }
    
    for(int i=0;i < count2; i++) {
        cin >> coeff2[i];
    }
    
    Polynomial second;
    for(int i = 0; i < count2; i++){
        second.setCoefficient(degree2[i],coeff2[i]);
    }
    
    cin >> choice;
    
    switch(choice){
            // Add
        case 1:
        {
            Polynomial result1 = first + second;
            result1.print();
            break;
        }
            // Subtract
        case 2 :
        {
            Polynomial result2 = first - second;
            result2.print();
            break;
        }
            // Multiply
        case 3 :
        {
            Polynomial result3 = first * second;
            result3.print();
            break;
        }
        case 4 : // Copy constructor
        {
            Polynomial third(first);
            if(third.degCoeff == first.degCoeff) {
                cout << "false" << endl;
            }
            else {
                cout << "true" << endl;
            }
            break;
        }
            
        case 5 : // Copy assignment operator
        {
            Polynomial fourth(first);
            if(fourth.degCoeff == first.degCoeff) {
                cout << "false" << endl;
            }
            else {
                cout << "true" << endl;
            }
            break;
        }
            
    }
    
    return 0;
}
