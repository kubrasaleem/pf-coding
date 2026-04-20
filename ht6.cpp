#include <iostream>
using namespace std;

float calculateSalary(float base, int score, int experience) {
    float bonus = 0;

    // Bonus based on score
    if (score >= 90)
        bonus = base * 0.20;
    else if (score >= 75)
        bonus = base * 0.10;
    else
        bonus = base * 0.05;

    // Extra 5% if experience >= 5 years
    if (experience >= 5)
        bonus += base * 0.05;

    return base + bonus;
}

int main() {
    float base;
    int score, experience;

    cout << "Enter base, score and experience in years: " << endl;
    cin >> base >> score >> experience;

    cout << "Final Salary: " << calculateSalary(base, score, experience) << endl;
    return 0;
}