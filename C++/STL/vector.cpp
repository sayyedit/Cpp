#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>  v ={10};
    cout<<"Before PUSHING into VECTOR"<<endl;
    for(int x:v)
        cout<<x<<endl;
    for(int x=1;x<10;x++){
        v.push_back(x);
    }
    cout<<"After PUSHING into VECTOR"<<endl;
    for(int x:v)
        cout<<x<<endl;
    return 0;
}