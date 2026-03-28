#include<iostream>
using namespace std;
int main(){
  string username,password;
  string storedusers[3] ;
  bool login=false;
  for(int i=0; i<3; i++){
    cout<<" Enter username:";
    cin>>username;
    cout<<" Enter password:";
cin>>password;
storedusers[i]=username;
if(username=="admin" && password=="1234"){
cout<<"Login Successful ";
login=true;
break;
}
else{
    cout<<"Invalid Login";
}
  }
  if(!login){
    cout<<"Program ended.";
    return 0;
  }
  string studentNames[3];
  int studentAges[3];
  string Courses[3];

  int studentCount=0;
  int courseCount=0;
  int choice;

  while(choice!=5){
    cout<<"------University Management System-------"<<endl;
    cout<<"1.Add students"<<endl;
        cout<<"2.View students"<<endl;
            cout<<"3.Add courses"<<endl;
                cout<<"4.View courses"<<endl;
                    cout<<"5.Exit"<<endl;
                    cout<<" Enter your choice:";
                    cin>>choice;
                    if(choice==1){
                        if(studentCount<3){
                            cout<<" Enter sudent name:";
                            cin>>studentNames[studentCount];
                            cout<<" Enter student age:";
                            cin>>studentAges[studentCount];
                            studentCount++;
                            cout<<" Student added successsfully";

                        }
                        else{
                            cout<<"Student limit reached";
                        }
                    }
                    else if(choice==2){
                        cout<<"Students list";
                        for(int i=0; i<studentCount; i++)
        {
    cout<<"Name: "<<studentNames[i] <<" , Age: "<<studentAges[i]<<endl;
  }
  }
  else if(choice==3){
    if(courseCount<3){
        cout<<" Enter course name:";
        cin>>Courses[courseCount];
        courseCount++;
        cout<<" Course added successfully";
    }
    else{
        cout<<"Course limit reached";
    }
  }
else if(choice==4){
    cout<<"Course list:";
    for(int i=0; i<courseCount;i++){
        cout<<Courses[i]<<endl;
    }
}
else if(choice==5){
    cout<<" Program ended";
    break;
}
else{
    cout<<"Invalid choice";
}
}
}