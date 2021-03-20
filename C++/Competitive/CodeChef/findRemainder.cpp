#include<iostream>
using namespace std;
int main(){
    int n;
    int t[1000]; //number of test cases
    int a,b;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        t[i]=a%b;
    }
    for(int i=0;i<n;i++){
        cout<<t[i]<<endl;
    }
    
    return 0;
}