#include<iostream>
using namespace std;
main(){
    int n;
cout<<"Enter number of elements:";
cin>>n;
int arr[n];
cout<<"Enter "<< n << " numbers:"<<endl;
for( int i=0; i<n; i++){
cin>>arr[i];
}
int sum=0;
for(int i=0; i<n; i++){
    sum=sum+arr[i];
}
cout<<"Sum= "<<sum<<endl;

}