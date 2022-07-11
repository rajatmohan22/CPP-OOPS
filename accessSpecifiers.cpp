#include <iostream>
using namespace std;


class SomethingLmao{
    int x;
    public:
    int y;
    protected:
    int z;
};

class CrazyXD: public SomethingLmao{
    public:
    void Fun(){
        x=10; // Not possible.
        y=30; // Possible.
        z=90; /// Possible.
    }
};


int main(){

    SomethingLmao sl;
    sl.x=10; /// Not possible.
    sl.y=30; /// Possible.
    sl.z=50; /// Not possible.
}