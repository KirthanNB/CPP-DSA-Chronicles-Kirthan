#include<iostream>
#include<vector>
using namespace std;
bool solution(vector<vector<int>> matrix) {
    int n = matrix.size();
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            if(matrix[i][j] != matrix[j][i])
                return false;
    return true;
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