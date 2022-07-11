#include <iostream>
using namespace std;

class A{

    public: // If you make this prtected, then
    void Show(){
        cout<<"Hello";
    }
};

class B: virtual public A{

};

class C: virtual public A{
    
};

class D: public B, public C{
    
};


int main(){
    D d;
    d.Show();
}