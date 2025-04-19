#include<iostream>
#include<vector>
using namespace std;
bool solution(vector<vector<int>> matrix, int target){
    int rows = matrix.size();
    int cols = matrix[0].size(); 
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(matrix[i][j] == target){
                return true;
            }
        }
    }
    cout<<"Target element dont exist in the matrix.";
    return false;
}
int main(){
    int m, n, temp, target;
    cout<<"Enter the order of matrix: ";
    cin >> m >> n;
    vector<vector<int>> matrix(m, vector<int>(n));
    cout << "Enter " << n*m << " elements: \n";
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>> matrix[i][j];
        }
    }
    cout<<"Enter target member: ";
    cin>>target;
    cout<<boolalpha<<solution(matrix, target);
    return 0;
}