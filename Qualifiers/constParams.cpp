#include <iostream>
using namespace std;

int function(const int &x, const int &y){
    x++; y++;  /// cant modify if params are constant.
    cout<<x<<" "<<y;
}