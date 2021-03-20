#include<iostream>
using namespace std;
int main()
{
    
}
void PalinArray(int a[], int n){  
    for(int i=0;i<n;i++)
    {
        int n, num, digit, rev = 0;
        num = a[i];
        n = a[i];
        do
         {
            digit = num % 10;
            rev = (rev * 10) + digit;
            num = num / 10;
         } while (num != 0);

        if (n == rev)
            cout << 1<<endl;
        else
            cout << 0<<endl;
    }

}
