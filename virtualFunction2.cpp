/// Need for Virtual Function
#include <iostream>
using namespace std;
class TV{
    public:

    virtual void switchOn(){ /// Here we add virtual, to avoid the mistake of calling the base classes method (like we saw before).

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
    t->switchOn();/// now it will switch on with style.

}