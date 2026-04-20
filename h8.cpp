#include <iostream>
using namespace std;

float calculateBalance(float balance, int years) {
    float interest = 0;

    // Interest based on balance
    if (balance < 10000)
        interest = balance * 0.05;
    else if (balance <= 50000)
        interest = balance * 0.07;
    else
        interest = balance * 0.10;

    // Extra 2% if years >= 3
    if (years >= 3)
        interest += balance * 0.02;

    return balance + interest;
}

int main() {
    float balance;
    int years;

    cout << "Enter Balance and years: " << endl;
    cin >> balance >> years;

    cout << "Updated Balance: " << calculateBalance(balance, years) << endl;
    return 0;
}