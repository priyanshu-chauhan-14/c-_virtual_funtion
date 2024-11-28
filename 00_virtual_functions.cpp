#include<iostream>
using namespace std;
class Priyanshu{
    protected:
    float rating;
    string name;
    public:
    Priyanshu(){this->name = "C++";
        this->rating = 4.7;}
    Priyanshu(string name,float rating){
        this->name = name;
        this->rating = rating;
    }
     void display(){
        cout<<" Course name is : "<<name<<endl;
        cout<<" Course rating : "<<rating<<endl;
    }
};
class Video : public Priyanshu{
    protected:
    float len;
    public:
    Video(float len){
       this->len = len;
    }
    void display(){
        cout<<" Course duration is : "<<len<<endl;
        cout<<" Course name is : "<<name<<endl;
        cout<<" Course rating : "<<rating<<endl;
    }
};
class Text : public Priyanshu{
    protected:
    int page;
    public:
    Text(int page, float len,string name,float rating) : Priyanshu( name, rating) {
       this->page = page;
    }
    void display(){
        cout<<" Course notes length is : "<<page<<" pages"<<endl;
        cout<<" Course name is : "<<name<<endl;
        cout<<" Course rating : "<<rating<<endl;
    }
};

int main(){
 Priyanshu *ptr = new Video(3.5);
 ptr->display();
return 0;
}