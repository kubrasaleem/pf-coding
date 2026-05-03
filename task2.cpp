#include <iostream>
using namespace std;
void printToyotaBlue(int cars[][3], int rows) {
    cout << "\n--- Part A: Toyota Blue Cars ---" << endl;
    for (int i = 0; i < rows; i++) {
        if (cars[i][0] == 0 && cars[i][1] == 0) {
            cout << "Car " << i+1 << " -> Toyota, Blue, Model: " << cars[i][2] << endl;
        }
    }
}
int countRed(int cars[][3], int rows) {
    int count = 0;
    for (int i = 0; i < rows; i++) {
        if (cars[i][1] == 1) count++;
    }
    return count;
}
int countNissan(int cars[][3], int rows) {
    int count = 0;
    for (int i = 0; i < rows; i++) {
        if (cars[i][0] == 2) count++;
    }
    return count;
}
int converter(int cars[][3], int rows, int color) {
    int count = 0;
    for (int i = 0; i < rows; i++) {
        if (cars[i][1] == color) count++;
    }
    return count;
}
void transpose(int cars[][3], int rows) {
    cout << "\n--- Part E: Original Matrix ---" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 3; j++) {
            cout << cars[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "\n--- Part E: Transposed Matrix ---" << endl;
    for (int j = 0; j < 3; j++) {
        for (int i = 0; i < rows; i++) {
            cout << cars[i][j] << "\t";
        }
        cout << endl;
    }
}

int main() {
    int cars[][3] = {
        {0, 0, 2020},  
        {1, 1, 2019},   
        {0, 0, 2021},   
        {2, 2, 2018},   
        {0, 1, 2022},   
        {2, 1, 2023},   
    };
    int rows = 6;
    printToyotaBlue(cars, rows);
    cout << "\n--- Part B: Total Red Cars ---" << endl;
    cout << "Red cars: " << countRed(cars, rows) << endl;
    cout << "\n--- Part C: Total Nissan Cars ---" << endl;
    cout << "Nissan cars: " << countNissan(cars, rows) << endl;
    cout << "\n--- Part D: Converter Function ---" << endl;
    cout << "Blue cars:  " << converter(cars, rows, 0) << endl;
    cout << "Red cars:   " << converter(cars, rows, 1) << endl;
    cout << "White cars: " << converter(cars, rows, 2) << endl;
    transpose(cars, rows);
    return 0;
}