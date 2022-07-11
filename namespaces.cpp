//// Used to remove name conflict.
/// Suppose I have 2 functions and i am adament about it, then to avoid name ambiguity we use namespaces.
#include <iostream>
using namespace std;
/// name spaces have nothing to do with encapsulation.

namespace first{
    void myFunction(){
        cout<<"First";
    }
}

namespace second{
    void myFunction(){
        cout<<"Second";
    }
}

/// THis is one way.
// int main(){
//     first::myFunction();
//     second::myFunction();
// }


/// This is another

using namespace first;
int main(){
    myFunction();
    second::myFunction();
} // and vv.