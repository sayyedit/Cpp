#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fs("My.txt");
    fs<<"Hello, Faisal "<<endl;
    fs<<25;
    fs.close();
}