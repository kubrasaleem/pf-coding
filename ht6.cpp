#include<iostream>
using namespace std;
main(){
    int n;
    cout<<"Enter number of students:";
    cin>>n;

    string students[n];
    cout<<"Enter names of "<< n << " students: "<<endl;
    for(int i=0; i<n; i++){
    cin>>students[i];
    }
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1;j++){
            if(students[j]>students[j+1]){
                string temp=students[j];
                students[j]=students[j+1];
                students[j+1]=temp;
            }
        }
    }
    cout<<"Students in alphabetical order: "<<endl;
    for(int i=0; i<n; i++){
        cout<<students[i]<<endl;
    }
}