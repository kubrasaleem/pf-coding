#include <iostream>
using namespace std;
bool isGoalScored(char field[7][16]) {
    int ballRow = -1, ballCol = -1;
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 16; j++) {
            if (field[i][j] == '0') {
                ballRow = i;
                ballCol = j;
            }
        }
    }

    int crossbarRow = 3;
    int leftPost = -1, rightPost = -1;

    for (int j = 0; j < 16; j++) {
        if (field[crossbarRow][j] == '#') {
            if (leftPost == -1)
                leftPost = j;
            rightPost = j;
        }
    }
    if (ballRow < crossbarRow &&
        ballCol > leftPost &&
        ballCol < rightPost) {
        return true;
    }

    return false;
}

int main() {
    char field1[7][16] = {
        {' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' '},
        {' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' '},
        {' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' '},
        {' ','#','#','#','#','#','#','#','#','#','#','#','#','#',' ',' '},
        {' ','#',' ',' ','0',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' '}, // ball neeche
        {' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' '},
        {' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' '}
    };
    char field2[7][16] = {
        {' ','#',' ',' ','0',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' '}, // ball upar
        {' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' '},
        {' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' '},
        {' ','#','#','#','#','#','#','#','#','#','#','#','#','#',' ',' '},
        {' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' '},
        {' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' '},
        {' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' '}
    };
    cout << "Scenario 1: ";
    if (isGoalScored(field1))
        cout << "True (Goal Scored)" << endl;
    else
        cout << "False (No Goal)" << endl;

    cout << "Scenario 2: ";
    if (isGoalScored(field2))
        cout << "True (Goal Scored)" << endl;
    else
        cout << "False (No Goal)" << endl;

    return 0;
}