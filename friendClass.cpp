#include <iostream>
using namespace std;

///Name declaration of the class. We do this for functions as well. 
///It is just letting the compiler know before hand that so and so is to come.

class Your;

class My{
    int x;
    public:
    int y;
    protected:
    int z;

    friend Your; /// You have to let the compiler know before hand that Your is a class.
};

class Your{
    public:
    My m;
    Your(){
        m.x=10; /// Cant do this if Your is not a friend class of My.
        cout<<m.x<<endl; /// Or this
    }
};

