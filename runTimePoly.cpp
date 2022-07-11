/// Need for Virtual Function
#include <iostream>
using namespace std;

class Car{
    public:
    virtual void start(){
        cout<<"Car is starting";
    }
};

class Toyota: public Car{
    public:
    void start(){
        cout<<"Toyota is starting"<<endl;
    }
};

class Fortuner: public Car{
    public:
    void start(){
        cout<<"Fortuner is starting"<<endl;
    }

};


int main(){

    Car *c = new Toyota();
    c->start();
    c = new Fortuner;
    c->start();

}

// Runtime polymorphism or Dynamic Method Dispatch is
//  a process in which a call to an overridden method is resolved at runtime rather than compile-time.


