#include <iostream>
#include <fstream>
using namespace std;
/// Syntax: /// [capture-list](parameter-list)->return-type{body}

int main(){

    auto x = []()->int{return 5;}();
    // cout<<x;

    auto f = [](int x=0,int y=0){return x+y;};
    // cout<<f(3,4);

    int a=4,b=6;

    auto f2 = [a,b](){cout<<a<<" "<<b;}; /// This wont display shit, you need to capture a and b andd for that you need to add it in the capture list

    /// you cannot modify the captured variables as well. If you need to do that, then pass them by reference as follows.

    auto f3 = [&a,&b]{cout<<++a<<" "<<++b<<endl;};
    // f3(); /// if you want to access everything that is there locally, then do this:

    int c=7;

    auto f4 = [&]{cout<<++c<<" "<<++a<<" "<<++b<<++c;};
    f4();
}


