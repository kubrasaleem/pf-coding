

#include <iostream>
using namespace std;

// Function to bring largest column first
void largestColumnFirst(int M[][5], int rows) {
    int maxCol = 0;
    int maxSum = 0;

    // First column ka sum
    for (int i = 0; i < rows; i++) {
        maxSum += M[i][0];
    }

    // Baaki columns check karo
    for (int j = 1; j < 5; j++) {
        int sum = 0;

        for (int i = 0; i < rows; i++) {
            sum += M[i][j];
        }

        if (sum > maxSum) {
            maxSum = sum;
            maxCol = j;
        }
    }

    // Swap largest column with first
    for (int i = 0; i < rows; i++) {
        int temp = M[i][0];
        M[i][0] = M[i][maxCol];
        M[i][maxCol] = temp;
    }
}

// Print function
void printMatrix(int M[][5], int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 5; j++) {
            cout << M[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    int M[rows][5];  // column size fixed = 5

    cout << "Enter elements (" << rows << "x5 matrix):\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> M[i][j];
        }
    }

    cout << "\nBefore:\n";
    printMatrix(M, rows);

    largestColumnFirst(M, rows);

    cout << "\nAfter (Largest Column First):\n";
    printMatrix(M, rows);

    return 0;
}