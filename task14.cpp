#include<iostream>
using namespace std;
string nintotext(int num){
string ones[20]={ "", "One", "Two", "Three", "Four",
        "Five", "Six", "Seven", "Eight", "Nine",
        "Ten", "Eleven", "Twelve", "Thirteen",
        "Fourteen", "Fifteen", "Sixteen",
        "Seventeen", "Eighteen", "Nineteen"};
string tens[10] ={"", "", "Twenty", "Thirty", "Forty",
        "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"
    };
if (num < 20)
    {
        return ones[num];
    }

    int tensDigit = num / 10;
    int onesDigit = num % 10;

    if (onesDigit == 0)
    {
        return tens[tensDigit];
    }
    else
    {
        return tens[tensDigit] + ones[onesDigit];
    }
}
int main(){
    int num;
    cout<<"Enter a number:";
    cin>>num;
     if (num < 1 || num > 99)
    {
        cout << "Error! Enter number between 1 and 99." << endl;
    }
    else
    {
        cout << nintotext(num) << endl;
    }
}