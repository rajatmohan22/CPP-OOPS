#include <iostream>
#include <fstream>
using namespace std;
/// when you are wrting to a file, and you mention ofstream ofile("blah.txt") and blah.txt doesnt exist, it will create it.
/// but here, when you are reading from it, the file must be existing. it wont create new one and all haha. it will return null if it cant read(ie not existing)
int main(){
    ifstream infile("my.txt");
    if(!infile){
        cout<<"Empty af";
    }

    if(!infile.is_open()){ /// both this and the condition above (!infile) do the same thing.
        
    }

}