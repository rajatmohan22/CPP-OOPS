#include <iostream>
#include <fstream>
using namespace std;


int main(){
    ifstream infile("My.txt");
    // can also do like ifstream infile; infile.open("My.txt");

    if(infile.is_open()){
        string str,str2;
        int x;
        // infile>>x;
        // infile>>str; this wont work.

        infile>>str;
        infile>>x; // this will.
        // infile>>str2;
        infile.close();/// close after reading.
        cout<<str<<" "<<x<<" "<<str2<<endl;
        if(infile.eof()){
            cout<<"Reached end of file";
        }

        


    } else {

    }

}