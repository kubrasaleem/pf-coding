#include <iostream>
using namespace std;
int main() {
    int mat[3][3];
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Enter element at position [" << i << "][" << j << "]: ";
            cin >> mat[i][j];
        }
    }
    cout << "\nThe matrix you entered is:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << mat[i][j] << "  ";
        }
        cout << endl;
    }
    bool isIdentity = true;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == j && mat[i][j] != 1) {
                isIdentity = false;
            }
            if (i != j && mat[i][j] != 0) {
                isIdentity = false;
            }
        }
    }
    if (isIdentity) {
        cout << "The entered matrix IS an identity matrix." << endl;
    } else {
        cout << "The entered matrix is NOT an identity matrix." << endl;
    }
    return 0;
}