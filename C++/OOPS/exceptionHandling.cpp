#include<iostream>
using namespace std;
// int main()
// {
//     int a, b, c;
//     cout<<"Enter a, b"<<endl;
//     cin>>a>>b;
//     try{
//         if(b==0)
//             throw b;
//         c = a/b;
//         cout<<"a/b = "<<c;
//     }
//     catch(int e){
//         cout<<"Division by "<<e<<" Not Allowed "<<endl;
//     }
//     return 0;
// }
int cal(int a, int b){
    if(b==0)
        throw b;
    return (a/b);
}
int main()
{
    int a, b, c;
    cout<<"Enter a and b "<<endl;
    cin>>a>>b;
    try{
        c = cal(a,b);
        cout<<"a/b ="<<c;
    }
    catch(int e){
        cout<<"Divide by "<<e<< " Not allowed"<<endl;
    }
    return 0;
}