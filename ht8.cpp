#include<iostream>
using namespace std;
main(){
    int n;
    cout<<"Enter number of flights: ";
    cin>>n;
    string flightNumbers[n];
    int seats[n];
    string destination[n];

    for(int i=0; i<n; i++){
        cout<<" Enter flight number "<<i+1<<": ";
        cin>>flightNumbers[i];
        cout<<" Enter seats available for "<<flightNumbers[i]<<": ";
        cin>>seats[i];
        cout<<"Enter destination for "<<flightNumbers[i]<<": ";
        cin>>destination[i];

    }
    cout<<" Flight information: "<<endl;
    cout<<"-----------------------"<<endl;
    for(int i=0; i<n; i++){
        cout<<"Flight  "<< flightNumbers[i] <<" to " <<destination[i]<<" has "<<seats[i]<<" seats avaliable"<<endl;

    }
    cout<<"Flights with seats less than 5: "<<endl;
    cout<<"-------------------------"<<endl;
    for(int i=0;i<n; i++){
        cout<<"Flight "<< flightNumbers[i] <<" to " <<destination[i]<<" has "<<seats[i]<<" seats avaliable"<<endl;
    }
    }
    