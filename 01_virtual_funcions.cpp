/*
Define a Virtual Function: Write a C++ program with a base class Animal containing a virtual function speak(). Create a derived class Dog that overrides speak() to print "Woof!". Demonstrate polymorphism by calling speak() through a base class pointer.
*/
#include<iostream>
using namespace std;
class Animal{
 public:
    virtual void speak(){}
};
class Dog : public Animal{
    public:
    void speak(){
        cout<<" woof"<<endl;
    }
};
int main(){
 Animal *ptr = new Dog();
 ptr->speak();
return 0;
}