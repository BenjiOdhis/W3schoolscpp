#include<iostream>
using namespace std;

    int modsum(int l)

    {
        if(l<1)return 0;
        return l%10+ modsum(l/10);
    }


int main()
{
    cout<< modsum(4321);
    return 0;
}