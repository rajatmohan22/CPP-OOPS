#include <iostream>
using namespace std;


/// There are 4 main things here
/// lety int y=6;
//// 1. int const x = 4. constant of type integer having value 4.
//// 2. const int* x = &y; integer pointer which is constant. Meaning, you cant modify the value stored at location x.
//// 3. int* const x = &y; constant pointer of type integer. Meaning you cant change the value that it is pointing at.
//// 4. const int* const x = &y; constant integer pointer which is constant. Meaning, cant relocate nor can it modify the value

int main(){
    const int PI = 3.14; /// this is the first use, it can be used to store values that musnt change.
    int x=20;
    const int* y = &x; /// this means y becomes a read only location.
    cout<<*y;
    cout<<++*y; /// this isnt possible.
    int* const yy = &x;
    int g = 40;
    yy = g; /// this isnt possible either.
}