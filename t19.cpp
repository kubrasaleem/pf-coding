#include<iostream>
using namespace std;
main (){
    int n;
    cout<<"Enter size of array:";
    cin>>n;
    int arr[n];
cout<<"Enter elements:"<<endl;
for(int i=0; i<n; i++){
    cin>>arr[n];
}
bool isSpecial=true;
for(int i=0; i<n; i++){
    if(i% 2==0){
        if(arr[i]% 2!=0){
            isSpecial=false;
            break;
        }
    }
    else{
        if(arr[i]% 2==0){
            isSpecial=false;
            break;
        }
    }
}
if(isSpecial){
cout<<"Special array"<<endl;
}
else{
    cout<<"Not special array"<<endl;

}

}