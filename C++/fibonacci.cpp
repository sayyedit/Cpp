#include<iostream>
using namespace std;
int main()
{
    int t1=0,t2=1,next;
    int n;
    cout<<"Enter the number to find the fibonacci upto that : ";
    cin>>n;
    if(n==0 || n==1 )
        cout<<n;
    else
    {
        for(int i=0;i<n;i++)
        {
            next=t1+t2;
            cout<<next<<endl;
            t1=t2;
            t2=next;
        }
    }
    return 0;
}