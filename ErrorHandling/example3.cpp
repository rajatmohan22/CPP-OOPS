/// You can 'throw' any type of data. int,float,classatring etc.

#include <iostream>
using namespace std;

class myException: public exception{
};


int division(int a,int b){ /// In cpp its not throws (Java), it is throw. and also () around what it throws. It is also optional.
    if(b==0){
        throw myException();
    }
    return a/b;
}

int main(){
    try{
        division(6,3);
    } catch (myException m){ /// UNlike in JS, you need to mention the type here even if you are not using it.
        cout<<"Error code: ";
    }
}


/// Try catch should not be in the functions. I mean it can, but its not the best of practices.
///warning: dynamic exception specifications are deprecated in C++11.