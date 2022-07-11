#include <iostream>
using namespace std;


class Father{
    int a=10;
    public:
    int b=20;
    protected:
    int c=30;

    public:
    Father(){
        cout<<"Father-> "<<a<<" "<<b<<" "<<c<<endl;
    }
};

class Son: public Father{ /// when i say 'public' Father, i mean all the members that are inherited from the Father class to Son become  public and protected respectively in the son class.

    public:
    Son(){
        //cout<<a; /// Cant print because it is private to Father class obviously.
        cout<<"Son-> "<<"Cant print a"<<" "<<b<<" "<<c<<endl;
    }

};


class GrandSon: public Son{ // Same thing again, public son means all the members that are being inherited from the son, become public and protected respectively inside.

    public: /// if you dont make the constructor pubic, then you are preventing it from object creation.
    GrandSon(){
        cout<<"Grand Son-> "<<"Cant print a"<<" "<<b<<" "<<c<<endl;
    }
};


int main(){
    GrandSon g;
    ///g.c=90; /// Not Possibe, because protected
    g.b=90;
    //g.a There is no point lmao. 
    cout<<"Main->"<<" Cant modify a "<<" Can modify b, it is now: "<<g.b<<" Cant modify c"<<endl;
}