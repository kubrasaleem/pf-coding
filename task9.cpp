#include <iostream>
using namespace std;

const int ROWS = 5;
const int COLS = 5;

char world[ROWS][COLS] = {
    {' ', '#', ' ', ' ', ' '},
    {' ', '#', ' ', '#', ' '},
    {' ', ' ', ' ', '#', ' '},
    {' ', ' ', '#', ' ', ' '},
    {' ', ' ', ' ', ' ', ' '}   // ground
};

bool gravity = false;

// 1. Display function
void DisplayWorld() {
    cout << "\nWorld:\n";
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << world[i][j] << " ";
        }
        cout << endl;
    }
}

// 2. Set gravity (no change in world)
void SetGravityStatus(bool status) {
    gravity = status;
}

// One tick → move blocks 1 step down only
void oneTick() {
    // bottom se upar check karna zaroori hai
    for (int i = ROWS - 2; i >= 0; i--) {
        for (int j = 0; j < COLS; j++) {

            if (world[i][j] == '#' && world[i + 1][j] == ' ') {
                world[i + 1][j] = '#';
                world[i][j] = ' ';
            }
        }
    }
}

// 3. TimeTick function
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

    // 1 tick
    TimeTick(1);
    cout << "\nAfter 1 Tick:";
    DisplayWorld();

    // 3 ticks total
    TimeTick(2);
    cout << "\nAfter 3 Ticks:";
    DisplayWorld();

    return 0;
}