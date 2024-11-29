/* 
Default Virtual Functions: Implement a base class Game with a virtual function start() having a default implementation that prints "Game starting!". Override start() in a derived class Chess to print "Chess match starting!". Demonstrate the usage of the default implementation.
*/
#include<iostream>
using namespace std;
class Game{
 protected:

public:
    virtual void start(){
        cout<<"Game is starting..."<<endl;
    }
};
class chess{
    protected:
    public:
    void start(){
        cout<<"Chess match starting !"<<endl;
    }
};
int main(){
 
return 0;
}