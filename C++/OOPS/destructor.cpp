#include<iostream>
using namespace std;
class dest{
    public:
         dest()
    {
        cout<<"Constructor created"<<endl;
    }
     ~dest(){
        cout<<"Constructor distructed"<<endl;
    }
};
int main()
{
    dest d;
}