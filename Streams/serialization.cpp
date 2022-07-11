#include <iostream>
#include <fstream>
using namespace std;
/// The process of storing and retriving the state of an object is called serialization.

class Developer{
    public:
    string name,city;
    int salary; // in k.
    friend ofstream & operator<<(ofstream &ofs, Developer &d); /// when you have to override the insertion or extraction operators, you need to make them as friend functions.
};

ofstream & operator<<(ofstream &ofs, Developer &d){
    ofs<<d.name<<endl;
    ofs<<d.city<<endl;
    ofs<<d.salary<<endl;

    return ofs;
}

int main(){
    Developer d1;
    d1.city = "Sacremento";
    d1.name = "Rajat";
    d1.salary = 100;
    ofstream ofs("Developer.txt",ios::trunc); // saying if it exists, override the shit outta it.

    /// if i want to write the entire object into the file, obviouslty i need to override the << operator. insertion operator.
    ofs<<d1; // this is called stroing the state of an object.
    ofs.close();
}