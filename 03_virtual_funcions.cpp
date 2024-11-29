/*
Pointer to Base Class: Write a program where a base class Employee has a virtual function calculateSalary(). Create derived classes FullTime and PartTime that override this function. Use a pointer to Employee to call calculateSalary() for both derived class objects.
*/
/*
Pointer to Base Class: Write a program where a base class Employee has a virtual function calculateSalary(). Create derived classes FullTime and PartTime that override this function. Use a pointer to Employee to call calculateSalary() for both derived class objects.
*/
#include<iostream>
using namespace std;
class Employee{
 protected:
 float salary;
 public:
 void getdata(){
    cout<<" Enter the salary of the employee : "<<endl;
    cin>>salary;
 }
 virtual void display (){}
};
class fullTime : public Employee {
    void display(){
        cout<<" Full time employee\n Total salary : "<<salary*1.5<<endl;
    }
};
class partTime : public Employee {
    void display(){
        cout<<" Full time employee\n Total salary : "<<salary*1.25<<endl;
    }
};
int main(){
    Employee * ptrf = new fullTime();
    Employee * ptrp = new partTime();
    int choice;
    cout<<" Enter your choice \n1.Full Time \n2.Part Time"<<endl;
    cin>>choice;
    if(choice==1){
    ptrf->getdata();
    ptrf->display();
    }
    else{
    ptrp->getdata();
    ptrp->display();
    }
return 0;
}