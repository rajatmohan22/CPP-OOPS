/// This is the name in Java, might not be called the same in Cpp.

#include <iostream>
using namespace std;


class TV{
    public:
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

    void VideoCall(){

    }

    void Internet(){

    }

    void Netflix(){

    }

};

int main(){

    TV *t;
    t = new SmartTV(); ///  I can call a smartTV as Tv.

    t->changeChannel();
    t->turnOff();

    t->Internet(); /// When i am referencing a smartTV as Tv, i dont know that there are smartTV functions in it.

    SmartTV *s;
    s= new TV(); //// But i cannot call a normal TV as smartTV.
}