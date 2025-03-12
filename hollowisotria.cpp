#include<iostream>
using namespace std;
int main()
{
 int i,j,k,rows,spaces;
 cout<<"Enter no of rows"<<"\n";
 cin>>rows;
 spaces=rows-1;
 for(i=0;i<=rows;i++)
 
 {
    for(k=0;k<=spaces;k++)
    {

        cout<<" ";
    }
    
    for(j=1;j<=i*2-1;j++)
   {
   if(j==1||j==i*2-1||i==rows) 
   
cout<<"*";
    
    else
    cout<<" ";
   }
    cout<<"\n";
    spaces-=1;
 }   
    return 0;
}