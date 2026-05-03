#include <iostream>
#include <string>
using namespace std;
string grid[5][5] = {
    {".", ".", ".", "*", "."},
    {".", ".", ".", ".", "."},
    {".", "*", ".", ".", "."},
    {".", ".", ".", ".", "."},
    {".", ".", "*", "*", "."}
};
string fire(string coordinate) {
    int row = coordinate[0] - 'A';  // A=0, B=1, C=2...
    int col = coordinate[1] - '1';  // 1=0, 2=1, 3=2...

    if (grid[row][col] == "*") {
        return "BOOM";
    } else {
        return "splash";
    }
}
int main() {
    string coord;
    cout << "Enter coordinate to fire torpedo (e.g., A1, B3, E5): ";
    cin >> coord;
    cout << "Result: " << fire(coord) << endl;
    return 0;
}