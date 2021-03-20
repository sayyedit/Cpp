#include<iostream>
using namespace std;
int main()
{
    int ar[10];
    int n,i,j,temp;
    cout<<"Enter the number of elements : "<<endl;
    cin>>n;
    cout<<"Now enter the elements : "<<endl;
    for( i=0;i<n;i++){
        cin>>ar[i];
    }
    cout<<"Array is :"<<endl;
    for(i=0;i<n;i++){
        cout<<ar[i]<<endl;
    }
    i=0;
    j=n-1;
    while (i<n)
    {
        temp=ar[i];
        ar[i] = ar[j];
        ar[j] = temp;
        i++;
        j--;
    }
    cout<<"Reversed array : "<<endl;
    for(i=0;i<n;i++){
        cout<<ar[i]<<endl;
    }
}