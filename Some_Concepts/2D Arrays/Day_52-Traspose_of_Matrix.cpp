#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> solution(vector<vector<int>> matrix) {
    int m = matrix.size(), n = matrix[0].size();
    vector<vector<int>> trans(n, vector<int>(m));
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            trans[j][i] = matrix[i][j];
    return trans;
}

int main() {
    int m, n;
    cout << "Enter the order of matrix (rows and columns): ";
    cin >> m >> n;

    vector<vector<int>> matrix(m, vector<int>(n));
    cout << "Enter " << m * n << " elements:\n";
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            cin >> matrix[i][j];

    vector<vector<int>> sol = solution(matrix);
    cout << "Transposed Matrix:\n";
    for(auto row : sol) {
        for(auto val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}
