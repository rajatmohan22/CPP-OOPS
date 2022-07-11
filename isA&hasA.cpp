#include <iostream>
using namespace std;

class Rectangle{
    int length,breadth;

    public:
    Rectangle(int l=0,int b=0){
        length=l;
        breadth=b;
    }

    void setDims(int l,int b){
        length=l;
        breadth=b;
    }

};

class Cuboid: public Rectangle{
    int height;

    public:
    Cuboid(int l=0,int b=0,int h=0){
        setDims(l,b);
        height=h;
    }


};

class Table{
    
    Rectangle woodenPlank;
    int legs;
    int table_id; 
};


//// Cuboid isA Rectangle. This relationship is called isA.
/// The table hasA Rectangle object. This is hasA relationship.



//// isA means inheritance. HasA means you have that object inside the class.