#include <iostream>
#include <fstream>
#include <memory>
using namespace std;
/// We use smartPointers to avoid memory leakage as follows
/// unique_ptr

class Rectangle{
    public:
    int length;
    int breadth;

    Rectangle(int l=0,int b=0){
        length=l; breadth=b;
    }

    int Area(){
        return length*breadth;
    }

};

void Function(){
    // while(1){
    //     Rectangle *p = new Rectangle();
    // } //eof/// p will be destroyed here, but the object will be created in heap wont be deleted.

    unique_ptr<Rectangle> r1(new Rectangle()); /// this is a smart pointer.
    r1 ->length = 10;
    r1->breadth = 20; /// now, r1 is pointing to this object right, so you cannot have another pointer point on the same object. (but you can transfer the control.)

    unique_ptr<Rectangle> r2(new Rectangle(10,15));

//// the object and pointer gets deleted at the end of the function.

    cout<<r1->Area();
}

int main(){


}

