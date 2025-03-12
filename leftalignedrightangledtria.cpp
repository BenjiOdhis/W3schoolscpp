#include<iostream>
using namespace std;
int main()
{
    int rows, i,j;
    cout<<"input number of rows"<<"\n";
    cin>>rows;
    for(i=0;i<=rows;i++)
    {
for(j=0;j<=i;j++)
{
cout<<"*"<<"\t";
} 
cout<<"\n";
    }

    return 0;
}