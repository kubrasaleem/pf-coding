#include<iostream>
using namespace std;
main(){
    int n;
    cout<<"How many numbers do you want to enter? ";
    cin>>n;
    int numbers[100];
    for(int i=0;i<n;i++){
        cout<<"Enter number"<<i+1<<": ";
        cin>>numbers[i];
    }
    cout<<"You entered the following numbers:";
    for(int i=0; i<n;i++){
        cout<<numbers[i]<<" ";
    }
cout<<endl;
}