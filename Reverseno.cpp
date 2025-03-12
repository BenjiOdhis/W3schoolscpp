#include<iostream>
using namespace std;
int main()
{
    int num,revnum=0;
    cout<<"Enter number"<<"\n";
    cin>>num;
    while(num>=1)
    {
revnum=revnum*10+num%10;
num=num/10;
    
   
    }
    cout<<"The number in reverse is : "<<revnum;
    return 0;
}