//Return a 2D array in spiral order

#include<iostream>
#include<vector>
using namespace std;
vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector<int> result;
    if (matrix.empty()) return result;
    
    int top = 0, bottom = matrix.size() - 1;
    int left = 0, right = matrix[0].size() - 1;
    
    while (top <= bottom && left <= right) {
        // Traverse from left to right
        for (int i = left; i <= right; ++i) {
            result.push_back(matrix[top][i]);
        }
        top++;
        
        // Traverse from top to bottom
        for (int i = top; i <= bottom; ++i) {
            result.push_back(matrix[i][right]);
        }
        right--;
        
        if (top <= bottom) {
            // Traverse from right to left
            for (int i = right; i >= left; --i) {
                result.push_back(matrix[bottom][i]);
            }
            bottom--;
        }
        
        if (left <= right) {
            // Traverse from bottom to top
            for (int i = bottom; i >= top; --i) {
                result.push_back(matrix[i][left]);
            }
            left++;
        }
    }
    
    return result;
}
int main(){
    vector<vector<int>> matrix;
    int n,m;
    cout<<"Enter the number of rows and columns: ";
    cin>>n>>m;
    cout<<"Enter the elements of the matrix: "<<endl;
    for(int i=0;i<n;i++){
        vector<int> row;
        for(int j=0;j<m;j++){
            int x;
            cin>>x;
            row.push_back(x);
        }
        matrix.push_back(row);
    }
    vector<int> result = spiralOrder(matrix);
    cout<<"The spiral order of the matrix is: "<<endl;
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    return 0;
}