//// IF you are handling 2 exceptions using 2 classes (Base and dervived), then you must handle the exception from
/// the child class first and then from the parent class

///Parent class can handle the exception of child class also, so child first and then parent.

#include <iostream>
using namespace std;
class Parent{
    
};

class Son: public Parent{

};


int main(){

    try{
        int c=4/0;
    } catch(Son s){ // first handle son, then parent.

    } catch(Parent p){

    }
}