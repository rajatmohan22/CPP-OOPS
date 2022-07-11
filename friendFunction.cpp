///Like friend class, a friend function can be given a special grant by the 
////class to access its private and protected members. 
//A friend function can be: 
// a) A member of another class 
// b) A global function

/// It is more useful when it comes to operator overloading.

#include <iostream>
using namespace std;

class Complex{
    int real;
    int img;
    friend Complex operator + (Complex c1,Complex c2);
    
    public:
    Complex(int r=0,int i=0){
        real=r; img=i;
    }
    void Display(){
        cout<<real<<"+"<<img<<"i"<<endl;
    }
};

Complex operator +(Complex c1,Complex c2){
    Complex temp;
    temp.real=c1.real+c2.real;
    temp.img=c2.img+c2.img;
    return temp;
}

int main()
{
    Complex c1(2,3),c2(3,4),c3;
    c3=c1+c2;
    c3.Display();
    
}
 