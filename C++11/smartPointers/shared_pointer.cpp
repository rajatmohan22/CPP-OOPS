#include <iostream>
#include <memory>
#include <fstream>
using namespace std;

class Rectangle{
    public:
    int length;
    int breadth;

    Rectangle(int l=0,int b=0){
        length=l; breadth = b;
    }

};

int myFunc(){
    
    shared_ptr<Rectangle> r1(new Rectangle());
    shared_ptr<Rectangle> r2(r1); /// we are pointing r2 to the same object as r1.

    r1->breadth=20;
    r1->length=30;

    return r1.use_count(); /// How many pointers are pointing to the same object as r1.

    /// In the above syntax, we are almost doing:

    Rectangle * r3 = new Rectangle();
    Rectangle *r4;
    r4=r3; /// This is exactly what we are doing above also. ( but smartly ;) )
}


int main(){
    myFunc(); /// will return 2.
}