#include <iostream>
using namespace std;

// Function to print Pascal's Triangle up to 'n' rows
void printPascalsTriangle(int n) {
    for (int row = 0; row < n; ++row) {
        int val = 1; // first value in every row is always 1
        for (int space = 0; space < n - row - 1; ++space)
            cout << "  "; // spacing for alignment
        
        for (int col = 0; col <= row; ++col) {
            cout << val << "   ";
            val = val * (row - col) / (col + 1); // nCr formula optimization
        }
        cout << endl;
    }
}

int main() {
    int rows, cols, sum;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of cols: ";
    cin >> cols;
    cout << "Number of elements: " << rows*cols;
    printPascalsTriangle(rows);
    return 0;
}
