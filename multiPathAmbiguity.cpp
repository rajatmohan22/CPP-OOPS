#include <iostream>
using namespace std;

class A{
    protected:
    void Show(){
        cout<<"Hello\n";
    }
};

class B: public A{

};

class C: public A{

};

class D: public B, public C{
    
};

int main(){

    D d;
    d.Show(); /// The error says, Show() is ambiguous. To avoid this we need to use virtual Base classes.
}