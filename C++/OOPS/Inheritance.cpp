#include<iostream>
using namespace std;
class Parent
{
    public:
    int x;
    void display()
    {
        cout<<x<<endl;
    }
};
class Child:public Parent
{
    public:
    int y;
    void show()
    {
        cout<<x<<endl;
        cout<<y<<endl;
    }
};
int main()
{
    Parent p;
    Child c;
    p.x =10;
    p.display();
    c.y=20;
    c.x =100;
    c.show();
}