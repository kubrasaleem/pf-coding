#include<iostream>
using namespace std;
main(){
string my_password,user_enter;
my_password="Pass@123!";
cout<<"Enter password:";
cin>> user_enter;
if(user_enter==my_password){
    cout<<"Wow!You have cracked code!";
}
else{
    cout<<"It is not that simple, Try again";
}
}