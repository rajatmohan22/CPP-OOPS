#include <iostream>
#include <fstream>
using namespace std;

class Test{
    int *arr;
    ifstream file;
    public:
    Test(){
        file.open("Mytexe.cpp");
        cout<<"Test class is created";
        arr = new int[10];
    }

    /// other functions.

    ~Test(){  /// de initialize
        cout<<"Test class is destroyed.";
        file.close();
        delete []arr;
    }
};

int main(){
  
}