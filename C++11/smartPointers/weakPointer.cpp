#include <iostream>
#include <memory>
#include <fstream>
using namespace std;

/// same as shared pointers but they dont maintain a reference counter (there is no use_count());
class Rectangle{
    public:
    int length;
    int breadth;

    Rectangle(int l=0,int b=0){
        length=l; breadth = b;
    }

};

int main(){

}

