#include<iostream>
using namespace std;
main(){
    const int MAX=100;
    string books[MAX];
    bool issued[MAX]={false};
    int count=0;

    int choice=0;
    while(choice!=5){
        cout<<"=======Library Menu======="<<endl;
        cout<<"1.Add bookss"<<endl;
        cout<<"2.View books"<<endl;
        cout<<"3.Borrow books"<<endl;
        cout<<"4.Return books"<<endl;
        cout<<"5.Exit"<<endl;
        cout<<"Enter choice:";
        cin>>choice;

        cin.ignore();
        if(choice==1){
            int n;
            cout<<"How many books to add:";
            cin>>n;
            cin.ignore();

            for(int i=0; i<n;i++ ){
                cout<<"Enter book name:";
                cin>>books[count];
                issued[count]=false;
                count++;
            }
        }
        else if(choice==2){
            cout<<" Books list:";
            for(int i=0; i<count;i++){
                cout<<i+1<<" . "<<books[i];
                if(issued[i])
                    cout<<"Borrowed";
                    else
                        cout<<"Available";
                        cout<<endl;
                    }
                }
                else if(choice==3){
                    int num;
                    cout<<" Enter book number to borrow:";
                    cin>>num;
                    if(num>0 && num<=count){
                        if(issued[num-1]){
                            issued[num-1]=true;
                            cout<<" Book borrowed successfully.";
                        }
                            else{
                                cout<<" Book already borrowed.";
                            }
                        }
                        else{
                            cout<<" Invalid book number."<<endl;
                        }
                    }
                    else if(choice==4){
                        int num;
                        cout<<" Enter book number to return:";
                        cin>>num;
                        if(num>0 && num<=count){
                          if(issued[num-1]){
                            issued[num-1]=false;  
                            cout<<" book returned successfully";
                        }
                        else{
                            cout<<" This book was not borrowed.";
                        }
                    }
                    else{
                        cout<<"Invalid book number."<<endl;
                    }
                }
                else if(choice==5){
                    cout<<"Program ended.";
                }
                else{
                    cout<<"Invalid choice.";
                }
            }
        }
    