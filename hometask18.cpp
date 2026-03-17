#include<iostream>
using namespace std;
main(){
    while(true){
    int choice;
cout<<"------Resturant Management Sysem------"<<endl;
cout<<"1.View Food Menu"<<endl;
cout<<"2.Place Order"<<endl;
cout<<"3.View Order Status"<<endl;
cout<<"4.Generate bill"<<endl;
cout<<"5.Contact staff"<<endl;
cout<<"6.Exit"<<endl;
cout<<"Enter your choice(1-6):";
cin>>choice;
if(choice==1){
cout<<"You selected.View Food Menu."<<endl;
}
else if(choice==2){
    cout<<"You selected.View order status."<<endl;
}
else if(choice==3){
cout<<"You selected.Contact staff."<<endl;
}
else if(choice==4){
    cout<<"You selected.Generate bill."<<endl;
}
else if(choice==5){
    cout<<"You selected.Contact staff."<<endl;
}
else if(choice==6){
    cout<<"Existing Resturant Management System.Thank you!"<<endl;
}
else{
    cout<<"Invalid choice."<<endl;
}
}
}