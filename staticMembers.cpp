/// Memory will be allocated only one time for static variables
#include <iostream>
using namespace std;

class Test{
    int a;
    public:
    int b;
    static int count;

    Test(){
        count++;
    }

    static int getCount(){ /// STatic member functions cant access private members of the class even though they belong to the class. They can access only the static members of that class.
        // return a+count; // Cant do this.
        // cout<<b<<endl; /// Cant access public also, pathetic.
        return count;
    }
};
int Test::count=0; /// Like a global variable which is accessible to only that class. You dont even need to create an object to access count inact. You can access it with scope resolution.

int main(){
    Test t1,t2;
    cout<<t1.count<<endl;
    cout<<t2.count<<endl;
    /// Guess the output

    Test t3;
    cout<<t2.count<<endl;
    cout<<Test::count<<endl;
    Test t5,t4;
    cout<<t2.count<<endl; // yes, t2.
    /// Guess the output.
    cout<<Test::getCount()<<endl;
}