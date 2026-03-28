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
int evenCount=0;
for(int i=0; i<n; i++){
    if(arr[i] % 2==0){
        evenCount++;
    }
}
cout<<"Total even numbers= "<<evenCount<<endl;

}