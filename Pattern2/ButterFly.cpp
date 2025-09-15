#include <iostream>

int main() {
    int n; // Represents the number of rows for one half of the butterfly
    std::cout << "Enter the number of rows for half the butterfly: ";
    std::cin >> n;

    // Upper half
    for (int i = 1; i <= n; i++) {
        // Left wing stars
        for (int j = 1; j <= i; j++) {
            std::cout << "*";
        }
        // Middle spaces
        int spaces = 2 * (n - i);
        for (int j = 1; j <= spaces; j++) {
            std::cout << " ";
        }
        // Right wing stars
        for (int j = 1; j <= i; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    // Lower half
    for (int i = n; i >= 1; i--) {
        // Left wing stars
        for (int j = 1; j <= i; j++) {
            std::cout << "*";
        }
        // Middle spaces
        int spaces = 2 * (n - i);
        for (int j = 1; j <= spaces; j++) {
            std::cout << " ";
        }
        // Right wing stars
        for (int j = 1; j <= i; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}