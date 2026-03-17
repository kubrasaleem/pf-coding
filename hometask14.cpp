#include <iostream>
using namespace std;

int main() {
    int age, washingMachinePrice,toyprice; 
    cout << "Enter Lilly's age: ";
    cin >> age;
    cout << "Enter the price of the washing machine: ";
    cin >> washingMachinePrice;
    cout<<"Enter price of each toy:";
    cin>>toyprice;
    int MoneySaved = 0,giftmoney=10,toy=0; 

    for (int i = 1; i <= age; i++) {
        if (i % 2 == 0) { 
            MoneySaved += giftmoney-1;
            giftmoney+=10;
        } 
        else{
            toy=toy+1;
        }
        }
      int toymoney=toy*toyprice;
      int totalmoneysaved=toymoney+MoneySaved;
      if(washingMachinePrice<=totalmoneysaved)
     {
        cout << "Yes!" << endl;
        int remaining=totalmoneysaved-washingMachinePrice;
        cout<<remaining;
    } else {
        cout << "No!" << endl;
        int insufficientmoney=washingMachinePrice-totalmoneysaved;
        cout <<"You do not have enough money"<<insufficientmoney<<endl;
    }
    return 0;
}