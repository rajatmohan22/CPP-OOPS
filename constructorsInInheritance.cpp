//// Just know at what time what will get called.

#include <iostream>
using namespace std;

class Base{
    public:
    Base(){
        cout<<"This is Base class lmao"<<endl;
    }
    
    Base(int x){
        cout<<"This is Base class lmao but i have: "<<x<<endl;
    }
};


class Derived: public Base{
    
    public:
    Derived(){
        cout<<"This is dervived class xD"<<endl;
    }
    
    Derived(int x){
        cout<<"This is Derived class lmao but i have: "<<x<<endl;
    }
    
    Derived(int x,int y): Base(y){
        cout<<"Derived class with: "<<x<<endl;
    }
};

int main()
{
    Derived d(10,20);
    
}