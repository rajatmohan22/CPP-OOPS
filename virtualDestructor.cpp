#include <iostream>
using namespace std;



class Base{
    public:
    Base(){ 
        cout<<"Base class is created";
    }
   

    virtual ~Base(){ 
        cout<<"Base class is destroyed.";
    }
};

class Dervied: public Base{
    public:
    Dervied(){
        cout<<"Dervived class is created";
    }

    ~Dervied(){
        cout<<"Dervived classs is destroyed";
    }
    

};

int main(){
    Base *b = new Dervied(); 
    delete b; /// unfortunately, here only the base class destructor will be called(but this is absurd). We want the 
    //// derived class's destructor to be called first and then the base class. So, 
    ///we must add virtual next to the destructor of the base class. (which i have)
}

/// So if we want to achieve polymorphism, then we need to say virtual before the base class's destructor.