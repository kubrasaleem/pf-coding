#include<iostream>
using namespace std;
main (){
int first[2],second[100],n1,n2;
cout<<"Enter number of elements of first array:";
cin>>n1;
cout<<"Enter elements of first array:"<<endl;
for(int i=0;i<2;i++){
cin>>first[i];
}
cout<<"Enter number of elements of second array:";
cin>>n2;
cout<<"Enter number of second array:"<<endl;
for(int i=0;i<n2;i++){
cin>>second[i];
}
int result [102];
int k=0;
result[k++]=first[0];
for (int i=0; i<n2;i++){
    result[k++]=second[i];
}
result [k++]=first[1];
cout<<"Resulting arrray:";
for(int i=0;i<k;i++){
    cout<<result[i]<<"]";
}
}