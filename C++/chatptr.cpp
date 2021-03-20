#include<iostream>
using namespace std;
int main()
{
    int a[] ={12,345,25,245};
    char b[] = "abc";
    char *pc = &b[0];
    cout<< int(a) << endl;
    cout<<b<<endl;
    cout<<pc<<endl;
    return 0;
}