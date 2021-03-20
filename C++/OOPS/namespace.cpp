#include<iostream>
using namespace std;
// namespace mast
// {
//     int mast_a;
//     class MastkiClass{
//         int var;
//     };
// } // namespace mast
namespace world{   
void fun()
{
    cout<<"Hello , World"<<endl;
}
}
namespace universe{
void fun()
{
    cout<<"Hello, Universe"<<endl;
}
}

int main()
{
    // mast::mast_a=10;
    // cout<<mast::mast_a;
    world::fun();
    universe::fun();
}