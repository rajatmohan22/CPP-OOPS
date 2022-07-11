#include <iostream>
#include <memory>
#include <fstream>
using namespace std;

class Rectangle{
    public:
    int length;
    int breadth;

    Rectangle(int l,int b){
        length=l; breadth = b;
    }

    Rectangle():Rectangle(1,1){} // this means, if default constructors are called, then pass the same values to the one above.

};


/// Read a little more.

