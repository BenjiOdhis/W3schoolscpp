#include<iostream>
using namespace std;
int count(int n)
{
    if(n<1)
    return 0;
    return 1+count(n/10);
}
int main()
{
    cout<<count(4321);
    return 0;
}