#include<iostream>
using namespace std;
class Rectangle{
    public:
    int l;
    int b;
    int area(){
        return l*b;
    }
    int peri(){
        return 2*(l+b);
    }
};

int main(){
    Rectangle r;
    Rectangle *p;
    p=&r;
    p=new Rectangle;
    p->l=5;
    p->b =10;
    cout<<"Area = "<<p->area();
    return 0;
}