#include <iostream>
using namespace std;

int division(int a,int b) throw (string){ /// In cpp its not throws (Java), it is throw. and also () around what it throws. It is also optional.
    if(b==0) throw "Cannot divide by 0";
    return a/b;
}

int main(){
    try{
        division(6,3);
    } catch (string e){
        cout<<"Error code: "<<e;
    }
}


/// Try catch should not be in the functions. I mean it can, but its not the best of practices.
///warning: dynamic exception specifications are deprecated in C++11.