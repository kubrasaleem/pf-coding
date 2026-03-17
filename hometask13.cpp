#include<iostream>
#include<iomanip>
using namespace std;
main(){
int n,num;
cout<<"Enter numbers count:";
cin>>n;
int p1=0,p2=0,p3=0,p4=0,p5=0;
for(int i=1;i<=n;i++){
    cout<<"Enter number:";
    cin>>num;

if(num<200)p1++;
else if(num>=200&&num<=399)p2++;
else if(num>=400&&num<=599)p3++;
else if(num>=600&&num<=799)p4++;
else p5++;
}
double per1=(p1*100.0/n);
double per2=(p2*100.0/n);
double per3=(p3*100.0/n);
double per4=(p4*100.0/n);
double per5=(p5*100.0/n);

cout<< per1 <<"%"<<endl;
cout<< per2 <<"%"<<endl;
cout<< per3 <<"%"<<endl;
cout<< per4 <<"%"<<endl;
cout<< per5 <<"%"<<endl;
return 0;
}