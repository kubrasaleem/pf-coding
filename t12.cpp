#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter number of elements:";
cin>>n;
int arr[100];
cout<<"Enter "<< n<<" numbers:"<<endl;
int count=0;
for(int i=0; i<n;i++){
    int num;
    cin>>num;
    bool duplicate=false;
    for(int j=0;j<count;j++){
        if (arr[j]==num){
            duplicate=true;
            break;
        }
    }
    if(duplicate){
        cout<<"Already entered:"<<num<<endl;
    }
    else{
        arr[count]=num;
        count++;
        }
        }
    cout<<"Unique numbers entered:";
    for(int i=0;i<count;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}