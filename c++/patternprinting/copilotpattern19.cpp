#include <iostream>
#include <algorithm> // For std::max
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
    int currentRowValue = n;

    for (int i = 1; i <= size; i++) {
        int currentColumnValue = n;

        for (int j = 1; j <= size; j++) {
            cout << max(currentRowValue, currentColumnValue);

            if (j < n) 
                currentColumnValue--;
            else 
                currentColumnValue++;
        }

        if (i < n) 
            currentRowValue--;
        else 
            currentRowValue++;

        cout << endl;
    }

    return 0;
}