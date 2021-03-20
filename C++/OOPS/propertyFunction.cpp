#include<iostream>
using namespace std;
class Rectangle
{
    private:
    /* data */
    int length;
    int breadth;
    public:
    int area(){
        return length*breadth;
    }
    int getLenght(){
        return length;
    }
    int getBreadth(){
        return breadth;
    }
    void setLenght(int l){
        if(l>=0){
            length =l;
        }
        else
            cout<<"Length Cannot Be negative. Setting Length =0 "<<endl;
    }
    void setBreadth(int b){
      if(b>=0){
            breadth =b;
        }
        else
            cout<<"Breadth Cannot Be negative. Setting Breadth =0 "<<endl;
    }
    
};
int main(){
    Rectangle r;
    int l,b;
    cout<<"Enter the lenght of the rectanhgle : ";
    cin>>l;
    cout<<"Enter the breadth of the rectanhgle : ";
    cin>>b;
    r.setLenght(l);
    r.setBreadth(b);
    cout<<"Area : "<<r.area()<<endl;
    return 0;
}
