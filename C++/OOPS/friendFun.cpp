#include<iostream>
using namespace std;
class frnd{
    public: int a;
    private: int b;
    protected : int c;
    int friend fun();
};
int fun()
{
    frnd f;
    return (f.b =10);
}
int main()
{
    int ans = fun();
    cout<<ans<<endl;
    cout<<(int )&ans;
}