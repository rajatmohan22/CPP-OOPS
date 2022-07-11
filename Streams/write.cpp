#include <iostream>
#include <fstream>
using namespace std;


int main(){
    ofstream file("My.txt",ios::app); /// there are 2 options that you can mention (append and truncate),truncate will overwrite and append will add it to the file.
    file<<"Rajat"<<endl;
    file<<"Google INC"<<endl;
    file.close();
}