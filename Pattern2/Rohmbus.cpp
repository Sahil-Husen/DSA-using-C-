#include <iostream>
using namespace std;

void hollow(int row) {
    for (int i = 1; i <= row; i++) {
        // Print leading spaces
        for (int space = 1; space <= row - i; space++) {
            cout << " ";
        }

        // Print stars and spaces
        for (int j = 1; j <= row; j++) {
            if (i == 1 || i == row || j == 1 || j == row) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main() {
    int row;

    // Keep asking until row is ≤ 10
    while (true) {
        cout << "Enter the row (≤ 10): ";
        cin >> row;

        if (row <= 10) {
            hollow(row);
            break; // Exit loop after successful input
        } else {
            cout << "❌ Please enter a number less than or equal to 10!" << endl;
        }
    }

    return 0;
}
