#include <iostream>
#include <string>
using namespace std;

string projectTimeCalculation(int neededHours, int days, int workers) {
    int availableHours = days * workers * 9;
    
    if (availableHours >= neededHours) {
        int hoursLeft = availableHours - neededHours;
        return "Yes!" + to_string(hoursLeft) + " hours left.";
    } else {
        int hoursNeeded = neededHours - availableHours;
        return "Not enough time!" + to_string(hoursNeeded) + " hours needed.";
    }
}

int main() {
    int neededHours, days, workers;
    
    cout << "Enter needed hours: ";
    cin >> neededHours;
    
    cout << "Enter number of days of firm: ";
    cin >> days;
    
    cout << "Enter number of workers: ";
    cin >> workers;
    
    cout << projectTimeCalculation(neededHours, days, workers) << endl;
    
    return 0;
}