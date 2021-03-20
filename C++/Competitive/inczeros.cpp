#include<iostream>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
    int q, n;
    cin>>n;
    vector<int> arr(n, 0);
    cin>>q;
    
    while (q--)
    {
        int r, l;
        cin>>l>>r;
        arr[l]++;
        if(r+1 < n){
            arr[r+1]--;
        }
    }
    for(int i=0;i<n;i++){
        arr[i] += arr[i-1];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}


