#include <iostream>
#include <fstream>
using namespace std;
/// The process of storing and retriving the state of an object is called serialization.

class Developer{
    public:
    string name,city;
    int salary; // in k.
   friend ifstream & operator>>(ifstream &ifs, Developer &d);
};


ifstream & operator>>(ifstream &ifs, Developer &d){
    ifs>>d.name>>d.city>>d.salary;

    return ifs;
}
int main(){

    Developer d1;

    ifstream ifs("Developer.txt");
    ifs>>d1;

    cout<<d1.name<<endl;
    cout<<d1.city<<endl;
    cout<<d1.salary<<endl;
}




