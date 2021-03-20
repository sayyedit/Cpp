#include<iostream>
using namespace std;

// if a class is having a pure virtual funciton than that class is called as Abstract class 
class car{
    public:
        virtual void start(){
            cout<<"Car started"<<endl;
        }
        virtual void stop(){
            cout<<"Car stopped"<<endl;
        }
        // virtual void start()=0 pure virtual function
        // virtual void stop()=0 pure virtual function
};
class swift:public car{
    public:
        void start(){
            cout<<"Swift Car started"<<endl;
        }
        void stop(){
            cout<<"Swift Car stopped"<<endl;
        }
};

int main()
{
    car *p= new swift;
    p->start();
    return 0;
}