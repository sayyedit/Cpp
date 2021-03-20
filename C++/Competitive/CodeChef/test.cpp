#include<iostream>
using namespace std;
int main(){
    int n;
    int t=0;
    cin>>n;
    while (n)
    {   
        t=t+ (n%10);
        n=n/10;
    }
    cout<<t;
    return 0;
}