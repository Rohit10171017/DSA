#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int s = n * (n + 1) / 2;  // Total number to print
    int x = s;               // x will track the starting number for each row

    for (int i = n; i >= 1; i--) {
        x = x - i + 1;       // Calculate starting number of current row
        for (int j = 0; j < i; j++) {
            cout << x + j << " ";
        }
        x = x - 1;           // Prepare x for the next row
        cout << "\n";
    }

    return 0;
}

