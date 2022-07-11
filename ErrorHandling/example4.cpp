/// You can have multiple catch blocks and also a cathc all block. Defined as catch(...){}, this is called as ellipse
//// Catch all block must be the last block. for obvious reasons.

#include <iostream>
using namespace std;

int main(){
    int a=3,b=8;

    try{
        // throw 'a';
        // throw 2;
        // throw 3.3f;
        // throw "Lmao";
    } catch(int e){
        cout<<"Cant divide by 0";
    } catch (float e){
        cout<<"Cant divide by float";
    } catch(string e){
        cout<<"Cant divide by 0 string";
    } catch(...){ /// Catch all block. Also called ellipse
        cout<<"Ellipse";
    }
    return a/b;
}


/// Try catch should not be in the functions. I mean it can, but its not the best of practices.
///warning: dynamic exception specifications are deprecated in C++11.