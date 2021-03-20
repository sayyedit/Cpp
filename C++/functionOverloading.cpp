#include<iostream>
using namespace std;
int mul(int a){
    return a*a;
}
int mul(int a, int b){
    return a*b;
}
int mul(int a, int b, int c){
    return a*b*c;
}
int main()
{
    cout<<mul(10)<<endl;
    cout<<mul(10,12)<<endl;
    cout<<mul(10,20,30)<<endl;
}