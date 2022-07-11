#include <iostream>
using namespace std;

class Test{
    int x;
    public:
    int y;
    protected:
    int z;

    friend void Rajat();
};

void Rajat(){ /// No need of scope reolution operator for friend functions.
    Test t;
    t.x=10;
    t.y=90;
    t.z=30;
}