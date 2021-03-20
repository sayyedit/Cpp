#include<iostream>
using namespace std;
// void swapByValue(int a, int b)
// {
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
// }
// void swapByAddress(int *a, int *b)
// {
//     int *temp;
//     *temp = *a;
//     *a = *b;
//     *b = *temp;
// }
void swapByReference(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main()
{
    int a=10,b=20;
    cout<<a<<" "<<b<<endl;
    swapByReference(a,b);
    cout<<"Call By Reference :" ;
    cout<<a<<" "<<b;
    return 0;
}