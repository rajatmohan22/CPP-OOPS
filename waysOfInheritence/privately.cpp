#include <iostream>
using namespace std;


class Father{
    int a=10; ///private.
    public:
    int b=20;
    protected:
    int c=30;

    public:
    Father(){
        cout<<"Father-> "<<a<<" "<<b<<" "<<c<<endl;
    }
};

class Son: private Father{ /// when i say 'private' Father, i mean all the members that are inherited from the Father class to Son become private in the son class.Thus, Further inhereitence is disabled.

    public:
    Son(){
        //cout<<a; /// Cant print because it is private to Father class obviously.
        cout<<"Son-> "<<"Cant print a"<<" "<<b<<" "<<c<<endl;
    }

};


class GrandSon: public Son{ // Same thing again, public son means all the members that are being inherited from the son, become  public and protected respectively inside.

    public: /// if you dont make the constructor pubic, then you are preventing it from object creation.
    GrandSon(){
        cout<<"Grand Son-> "<<"Cant print a"<<" "<<" Cant print b "<<" Cant print c "<<endl;
    }
};

int main(){
    GrandSon g;
    cout<<"Main function-> Cant modify shit"<<endl;

}