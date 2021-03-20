#include<iostream>
using namespace std;
class Rect
{
    private:
    int length;
    int breadth;
    public:
    Rect()
    {
        length=1;
        breadth =1;
    }
    Rect(int l, int b)
    {
        setlength(l);
        setbreadth(b);
    }
    Rect (Rect &r){
        length=r.length;
        breadth = r.breadth;
    }
    void setlength(int l){
        if(l>0){
            length =l;
        }
        else {
            length = 1;
            cout<<"Length cannot be -ve\nSetting Length =1 "<<endl;
        }
    }
    void setbreadth(int b){
        if(b>0)
        {
            breadth =b;
        }
        else {cout<<"Breadth cannot be -ve\nSetting Breadth =1 "<<endl;
            breadth =1;
        }
    }
    int getlength(){ return length;}
    int getbreadth(){return breadth;}
    int area()
    {
        return (length*breadth);
    }
    int perimeter()
    {
        return 2*(length+breadth);
    }
};
int main()
{
    Rect r1(10,5);
    //copy constructor
    Rect r2(r1);
     cout<<r2.area();
    
}