#include<iostream>
using namespace std;
class constr{
    public:
    constr(){
        cout<<"Default constr class constructor without parameter "<<endl;
    }
    constr(int x){
        cout<<"constr class constructor with parameter "<<endl;
    }
};
class derive:public constr{
    public:
    derive(){
         cout<<"Default derive constructor without parameter "<<endl;
    }
    derive(int x){
        cout<<"Derive class constructor with parameter "<<endl;
    }
};
int main()
{
    derive d(10);
    return 0;
}