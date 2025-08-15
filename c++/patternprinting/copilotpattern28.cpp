#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
        return 1;
    }

    int size = 2 * n - 1; // Total size of the pattern
    int leftBoundary = n, rightBoundary = n;

    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= size; j++) {
            // Print '*' for boundaries, otherwise print space
            if (j <= leftBoundary || j >= rightBoundary) {
                cout << "*";
            } else {
                cout << " ";
            }
        }

        // Adjust boundaries for the next row
        if (i < n) {
            leftBoundary--;
            rightBoundary++;
        } else {
            leftBoundary++;
            rightBoundary--;
        }

        cout << endl;
    }

    return 0;
}