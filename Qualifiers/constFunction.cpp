#include <iostream>
using namespace std;

class Test{
    int x=20;
    int y=30;

    Test() ///const  // cant put const for constructor and destructor.
    {
        
    }

    void MyFun() const{
        // x++; y++; cant modify.
        cout<<x<<" "<<y<<endl;
    }


};


int main(){

}