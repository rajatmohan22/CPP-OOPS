#include <iostream>
using namespace std;

/// Use of constructor:
// 1. Called when object is created ( not really a use but sure ig).
//2. Used for allocating resources.

// Use of Destructor
// 1. Called when the object is deleted and is used for deallocating the resoures.

class Test{
    Test(){ // constructor
        cout<<"Test class is created";
    }
    /// other functions.

    ~Test(){ // destructor.// only 1 can be there./// One special thing is that, a destructor can be virtual/.
        cout<<"Test class is destroyed.";
    }
}

int main(){
    // Geuss the output:
    //1.
    Test t;
    //2.
    Test *p = new Test();
    //3.
    Test *q = new Test();
    delete q;
}