#include<iostream>
using namespace std;
int main()
{
    int i,num=0,num1=1;
    int nums= num+num1;
    cout<<num<<",";
    cout<<num1;
    cout<<","<<nums;
    for(i=0;i<15;i++)
    {
        num=num1;
        num1=nums;
        nums=num1+num;
        cout<<","<<nums;


    }
   
    return 0;
}
