#include <iostream>
using namespace std;
#define PI 3.142 // if this line was not there, PI would be 3.14 (why?)
# define SQR(x) (x*x) 
# define MSG(x) (#x) /// # means enclose x in double quotes
# ifndef PI /// means if PI is not defined(in macros only), then define PI as 3.14
    #define PI = 3.14;
#endif

/// Pre Processor directives/ Macros.

int main(){
    int PI = 3; /// obv error. it is like saying, 3.14=3
}