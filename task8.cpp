#include <iostream>
using namespace std;

// Function to count identical rows
int countIdenticalRows(int M[][3], int n) {
    int count = 0;

    // Compare every row with next rows
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {

            // Check if row i and row j are same
            if (M[i][0] == M[j][0] &&
                M[i][1] == M[j][1] &&
                M[i][2] == M[j][2]) {
                count++;
            }
        }
    }

    return count;
}

// Print matrix
void printMatrix(int M[][3], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            cout << M[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;

    cout << "Enter number of rows: ";
    cin >> n;

    int M[100][3];  // max 100 rows

    cout << "Enter elements (" << n << "x3 matrix):\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> M[i][j];
        }
    }

    cout << "\nMatrix:\n";
    printMatrix(M, n);

    int result = countIdenticalRows(M, n);

    cout << "\nTotal Identical Rows: " << result << endl;

    return 0;
}
