#include<iostream>
using namespace std;
int main()
{
    int sum;
    int ar[5];

    cout<<"Enter the Array elements :"<<endl;
    for(int i=0;i<5;i++){
        cin>>ar[i];
    }
    cout<<"Enter the Sum you want to :";
    cin>>sum;
    for(int i=0;i<4;i++){
        for(int j=1;j<5;j++){
            if(ar[i]+ar[j] == sum){
                cout<<ar[i]<<"+"<<ar[j]<<"="<<sum<<" =>"<<"i="<<i<<"j="<<j<<endl;
            }
        }
    }
    return 0;
}