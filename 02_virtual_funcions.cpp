/*
Virtual Function Basics: Create a class Shape with a virtual function area(). Implement derived classes Circle and Rectangle to override area(). Show how the correct function is called using a base class pointer or reference.
*/
#include<iostream>
using namespace std;
class Shape{
public:
    virtual void area(){

    }
};
class Circle:public Shape{
    public:
    void area(){
        cout<<" Area of the circle whose radius is 4 cm : "<<4*4<<" cm sq"<<endl;
    }
};
class Rectangle:public Shape{
    public:
    void area(){
        cout<<" Area of the rectangle whose length is 4 cm and breadth is 8cm : "<<4*8<<" cm sq"<<endl;
    }
};
int main(){
    Shape *s = new Circle();
    s->area();
    s = new Rectangle();
    s->area();
return 0;
}