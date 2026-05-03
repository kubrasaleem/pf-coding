#include <iostream>
using namespace std;

const int ROWS = 5;
const int COLS = 5;

char world[ROWS][COLS] = {
    {' ', '#', ' ', ' ', ' '},
    {' ', '#', ' ', '#', ' '},
    {' ', ' ', ' ', '#', ' '},
    {' ', ' ', '#', ' ', ' '},
    {' ', ' ', ' ', ' ', ' '}   // last row
};

bool gravity = false;
bool isBlackHole = false;

// Display
void DisplayWorld() {
    cout << "\nWorld:\n";
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << world[i][j] << " ";
        }
        cout << endl;
    }
}

// Set gravity
void SetGravityStatus(bool status) {
    gravity = status;
}

// Black hole teleport
void handleBlackHole() {
    for (int j = 0; j < COLS; j++) {
        if (world[ROWS - 1][j] == '#') {
            world[ROWS - 1][j] = ' ';   // remove from bottom
            world[0][j] = '#';          // send to top
        }
    }
}

// One tick movement
void oneTick() {

    // move blocks down one step
    for (int i = ROWS - 2; i >= 0; i--) {
        for (int j = 0; j < COLS; j++) {

            if (world[i][j] == '#') {

                if (world[i + 1][j] == ' ') {
                    world[i + 1][j] = '#';
                    world[i][j] = ' ';
                }
            }
        }
    }

    // if black hole active, apply special rule
    if (isBlackHole) {
        handleBlackHole();
    }
}

// TimeTick
void TimeTick(int times) {
    if (!gravity) return;

    for (int t = 0; t < times; t++) {
        oneTick();
    }
}

int main() {

    cout << "Initial State:";
    DisplayWorld();

    SetGravityStatus(true);

    // Case 1: Solid ground
    isBlackHole = false;
    TimeTick(1);
    cout << "\nAfter Tick (Solid Ground):";
    DisplayWorld();

    // Case 2: Black hole active
    isBlackHole = true;
    TimeTick(2);
    cout << "\nAfter Tick (Black Hole Active):";
    DisplayWorld();

    return 0;
}