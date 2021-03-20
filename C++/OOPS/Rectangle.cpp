#include<iostream>
using namespace std;
class Rectangle
{
public:
    int area(int l, int b){
        return l*b;
    }
    int perr(int l, int b){
        return 2*(l*b);
    }
};

int main(){
    int l,b;
    Rectangle r1,r2;
    cout<<"Enter the length and breadth of the rectangle : \n";
    cin>>l>>b;
    cout<<"Area of the Rectangle is : "<<r1.area(l,b);
    return 0;
}

