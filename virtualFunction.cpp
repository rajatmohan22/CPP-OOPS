/// Need for Virtual Function
#include <iostream>
using namespace std;
class TV{
    public:

    void switchOn(){

    }

    void changeChannel(){

    }

    void turnOff(){

    }

};

class SmartTV: public TV{
    public:

    SmartTV(){
        cout<<"This is smartTV"<<endl;
    }

    void switchOn(){
        cout<<"Switching on with style 8)"<<endl;
    }

    void VideoCall(){

    }

    void Internet(){

    }

    void Netflix(){

    }

};


int main(){

    TV *t = new SmartTV();
    t->switchOn(); /// See here, this is DMD, so TV's switch on function will be called. Not the smartTV's function.
    /// But this is wrong logically. Becuase, as said before, i am refererring to the smartTV as a normal TV. bUt just because i am referring it as Normal TV, doesnt mean
    //// It will behave so. It will behave like a smartTV only. It "should" switchOn with style, but here it wont. So how to make this proper? Refer virtualFunction2.cpp
}