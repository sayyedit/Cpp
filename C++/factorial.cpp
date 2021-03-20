#include<iostream>
using namespace std;
int fact(int n)
{
    if(n== 0 || n==1)
        return n;
    else
        return n*fact(n-1);
}
int main()
{
    int n, factorial;
    cout<<"Enter the number to find the factotial of the number : ";
    cin>>n;
    factorial = fact(n);
    cout<<factorial<<endl;
    return 0;
}