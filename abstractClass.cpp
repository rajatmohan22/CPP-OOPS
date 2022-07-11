/// Need for Virtual Function
#include <iostream>
using namespace std;

/// Diff bw virtual and pure virtual function

// If a class has all pure virtual functions, then its sole purpose is to acheieve polymorphism and it is called Interface.
/// if it has some pure virtual and some concrete, then it is for reusability and polymorphism. If it has all concrete, then
/// obvioulsy its only purpose is reusability.

class Car{ /// This is now a abstract class. You cannot create the object of this class. But it can be used as a reference tpo achieve polymorphism.
    public:
    virtual void start()=0;
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

    // Car *c2 = new Car(); not possible. Even if there is one pure virtual functin, then the class becomes abstract, and you cant create an object.


}



