#include<iostream>
#include<string>
using namespace std;
main(){
    int n;
    cout<<"Enter number of customers: ";
    cin>>n;
    string customers[n];
    cout<<"Enter names of "<<n<<" customers: "<<endl;
    for(int i=0; i<n; i++){
    cin>>customers[i];
    }
char letter;
cout<<"Enter a letter: ";
cin>>letter;
int count=0;
for(int i=0; i<n; i++){
    if(!customers[i].empty() && (customers[i][0]==letter || 
    customers[i][0]==toupper(letter) ||  customers[i][0] ==tolower(letter))){
        count++;
    }
}
cout<<"Number of names starting with '"<<letter<<" = "<<count<<endl;

}