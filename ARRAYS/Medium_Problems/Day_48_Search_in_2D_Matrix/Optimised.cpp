#include<iostream>
#include<vector>
using namespace std;

bool solution(vector<vector<int>> matrix, int target) {
    int rows = matrix.size();
    int cols = matrix[0].size();

    int low = 0;
    int high = rows * cols - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        int row = mid / cols;
        int col = mid % cols;

        if (matrix[row][col] == target) {
            return true;
        } else if (matrix[row][col] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    cout << "Target element doesn't exist in the matrix.\n";
    return false;
}

int main() {
    int m, n, target;
    cout << "Enter the order of matrix: ";
    cin >> m >> n;

    vector<vector<int>> matrix(m, vector<int>(n));
    cout << "Enter " << m * n << " elements in sorted manner (row-wise):\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "Enter target number: ";
    cin >> target;

    cout << boolalpha << solution(matrix, target) << endl;
    return 0;
}
