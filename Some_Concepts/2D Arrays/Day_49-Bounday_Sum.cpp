#include<iostream>
#include<vector>
using namespace std;
// Time Complexity: O(m * n)
int solution(vector<vector<int>> matrix) {
    int m = matrix.size(), n = matrix[0].size();
    int sum = 0;
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            if(i == 0 || j == 0 || i == m-1 || j == n-1)
                sum += matrix[i][j];
    return sum;
}

int main(){
    int m, n, temp;
    cout<<"Enter the order of matrix: ";
    cin >> m >> n;
    vector<vector<int>> matrix(m, vector<int>(n));
    cout << "Enter " << n*m << " elements: \n";
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>> matrix[i][j];
        }
    }
    cout<<"Max Row Sum is: "<<solution(matrix);
    return 0;
}