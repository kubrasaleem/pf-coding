#include<iostream>
using namespace std;
main(){
while(true){
int choice,n1,n2,result;
cout<<"----Simple calculator----"<<endl;
cout<<"1.Addition"<<endl;
cout<<"2.Subtraction"<<endl;
cout<<"3.Multiplication"<<endl;
cout<<"4.Division"<<endl;
cout<<"5.Clear Screen"<<endl;
cout<<"6.Exit"<<endl;
cout<<"Enter your choice(1-6):";
cin>>choice;
if(choice==1){
    cout<<"Enter your first number:";
cin>>n1;
cout<<"Enter your second number:";
cin>>n2;
  result=n1+n2;
    cout<<"Result="<<result<<endl;
    break;
}
if(choice==2){
    cout<<"Enter your first number:";
cin>>n1;
cout<<"Enter your second number:";
cin>>n2;
     result=n1-n2;
      cout<<"Result="<<result<<endl;  
      break;
}
if(choice==3){
    cout<<"Enter your first number:";
cin>>n1;
cout<<"Enter your second number:";
cin>>n2;
  result=n1*n2;
      cout<<"Result="<<result<<endl;  
      break;
}
 if(choice==4){
    cout<<"Enter your first number:";
cin>>n1;
cout<<"Enter your second number:";
cin>>n2;
if(n2!=0){
     result=n1/n2;
      cout<<"Result="<<result<<endl; 
      break; 
}
 if(choice==5){
      cout<<"Screen cleared."<<endl; 
      break; 
}
 if(choice==6){
      cout<<"Existing calculator. Goodbye!"<<endl;
      break; 
    }
      else
      cout<<"Invalid choice."<<endl;
}
}

}