#include<iostream>
using namespace std;
class Optr{
    private:
    int real;
    int img;
    public:
    Optr(int r=0, int i=0){
        real =r;
        img=i;
    }
    int geti(){
        return img;
    }
    int getr(){
        return real;
    }
    void setr(int r){
        real = r;
    }
    void seti(int i){
        img = i;
    }
};
int main()
{
    Optr o1;
    o1.setr(10);
    o1.seti(12);
    cout<<o1.getr()<<"+"<<o1.geti()<<"i";
}