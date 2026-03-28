#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter number of resistors:";
cin>>n;
float arr[100];
float total=0;
cout<<"Enter resistance values:"<<endl;
for(int i=0; i<n; i++){
    cin>>arr[i];
    total+= arr[i];
}
cout<<"The total resistance of the series circuit is:"<<total<<" ohms ";
return 0;
}