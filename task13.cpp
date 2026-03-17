#include<iostream>
using namespace std;
 main()
 {
    int rows=6;
    int i,j;
    for(i=1;i<=rows;i++) 
    {
    for( j=1;j<=i;j++)
    {
    cout<<"*";
    }
    cout<<endl;
}
for(i=rows-1;i>=1;i--)
{
for(j=1;j<=i;j++)
{
    cout<<"*";
}
cout<<endl;
}
}