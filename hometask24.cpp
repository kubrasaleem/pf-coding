#include<iostream>
using namespace std;
main(){
    int n=5;
    for(int i=1;i<=n;i++){
        int k=n;
        for(int j=1;j<=n;j++){
            if(j<=i){
            cout<<k;
            k--;
        }
        }
        cout<<endl;
    }
    }