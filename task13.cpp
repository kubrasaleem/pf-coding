#include<iostream>
using namespace std;
string timetravel(int hh,int  mm){
    mm=mm+15;
if(mm>=60){
    mm=mm-60;
    hh=hh+1;
}
if(hh>=24)
    {
        hh=hh-24;
}
return to_string(hh) + ":" +to_string(mm);
}
int main(){
    cout<<"Enter hours:";
    int h;
    cin>>h;
    cout<<"Enter minutes:";
    int m;
    cin>>m;
string futuretime=timetravel(h,m);
cout<<"Future time "<< futuretime<<endl;

}