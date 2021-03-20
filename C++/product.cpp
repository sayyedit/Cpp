#include<iostream>
using namespace std;
int main()
{
    int n, ans=1,result;
    int ar[10];

    cin>>n;
    //array input
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    //finding the product
    for(int i=0;i<n;i++)
    {
        ans*=ar[i];
    }
    result= ans%(1000000007);
    cout<<result;
    return 0;
}

















// int main()
// {
//    int t;
//    cin>>t;
//    while(t--)
//    {
       
//     cout << product(a, b) << endl;
//    }

//     return 0;
// }