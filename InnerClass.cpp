/// The use of a class restricted to a class is called inner class.
/// Inner classes can only access those members of the outer class who are static.
#include <iostream>
using namespace std;

class Outer{
    int a;
    static int d;
    public: 
    int b;
    static int c;

    Outer(){
        cout<<"Outer class lmao"<<endl;
    }

    class Inner{
        protected:
        int c;
        private:
        int b;
        public:
        int a;
        Inner(){
            // cout<<a<<cout<<b; /// cant access a or b :(
                cout<<c<<" "<<d<<" "<<a<<endl; ////
        }
    };

    Inner i; /// Creating an object of the inner class inside the outer class.

   void Function(){
        cout<<a<<" "<<b<<" "<<i.a<<" "<<endl; /// cant access i.b or i.c though
    }

    // class Inner;

};


int main(){
    Outer o;
}


