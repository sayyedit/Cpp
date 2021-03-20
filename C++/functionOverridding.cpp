#include<iostream>
using namespace std;
class Parent{
    public:
    void display(){
        cout<<"Inside Parent"<<endl;
    }
};
class Child: public Parent{
    public:
    void display(){
        cout<<"Inside Child Overriding parent function"<<endl;
    }
    void display(int a){
        cout<<"Overriding and Overloading "<<a;
    }
};
int main()
{
    Parent p;
    p.display();
    Child c;
    c.display();
    c.display(20);
}