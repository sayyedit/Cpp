#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> A= {12111111,343,43,43224,534234};

    A.push_back(100);
    A.push_back(123);
    A.push_back(1234);
    for(int x:A){
        cout<<x <<"\n";
    }
    cout<<endl;
    sort(A.begin(), A.end());
    for(int x:A){
        cout<<x <<"\n";
    }
}