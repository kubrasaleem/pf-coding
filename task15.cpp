#include<iostream>
using namespace std;
main (){
    int ATM_PIN=1234;
    int choice;
    double balance=1000;
   int attempts=0;
   while(attempts<3){
    cout<<"Enter ATM PIN:";
cin>>ATM_PIN;
 if(ATM_PIN==1234){
    cout<<"Log in Successful"<<endl;
    break;
}
else {
    attempts++;
    cout<<"Wrong PIN"<<endl;
    if(attempts>=3){
    cout<<"Toom many attempts. Card blocked."<<endl;
    return 0;
    }
    }
    }
    while(true)
    {
    int choice;
cout<<endl<<"-------ATM MENU-------"<<endl;
cout<<"1.Check balance "<<endl;
cout<<"2.Deposit money"<<endl;
cout<<"3.Withdraw Money"<<endl;
cout<<"4.Exit"<<endl;
cout<<"Enter choice:";
cin>>choice;
if(choice==1){
    cout<<"Current balance:"<<balance;
}
else if(choice==2){
    int deposit1;
    cout<<"Enter amount to deposit:";
    cin>>deposit1;
    int depositamount2=balance+deposit1;
    cout<<"Money deposited succesfully."<<endl;
}
  else if(choice==3){
    int withdraw;
    cout<<"Enter amount to withdraw:";
    cin>>withdraw;
    if(withdraw<=balance){
    int withdraw2=balance-withdraw;
   cout<<"Please collect tour cash."<<endl;
}
    else{
    cout<<"Insufficient balance."<<endl;
    }
    }
   else if(choice==4){
    cout<<"Thank you for using ATM:"<<endl;
}
else{
    cout<<"Invalid choice:";
    break;
}
cout<<endl;
}
}