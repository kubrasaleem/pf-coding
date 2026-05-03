#include <iostream>
using namespace std;
void printSum(int matrix[][3], int rowSize) {
    int sum = 0;
    for (int i = 0; i < rowSize; i++) {
        for (int j = 0; j < 3; j++) {
            sum = sum + matrix[i][j];
        }
    }
    cout << "The sum of elements in the matrix is: " << sum << endl;
}
int main() {
    int rowSize;
    cout << "Enter row size: ";
    cin >> rowSize;
    int matrix[10][3];
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rowSize; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Enter element at position [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
    printSum(matrix, rowSize);
    return 0;
}