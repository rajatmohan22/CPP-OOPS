#include <iostream>
using namespace std;

int main(){
    int a=6,b=0,c=3;

    try{
        if(b!=0){
            return c=a/b;
        } else{
            throw 1;
        }
    } catch(int e){
        cout<<e<<endl;
    }
}

/// How is try-catch different from a regular if-else lmao you may ask, so for those suckers/// refer example2.cpp :)