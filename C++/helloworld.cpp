#include<iostream>
using namespace std;
int main()
{
    int ar[5];
    cout<<"Enter 5 elements :\n";
    for(int i=0;i<5;i++){
        cin>>ar[i];
    }
    cout<<"The array is :\n";
    for(int i=0;i<5;i++){
        cout<<"a["<<i<<"]= "<<ar[i]<<endl;
    }
}
