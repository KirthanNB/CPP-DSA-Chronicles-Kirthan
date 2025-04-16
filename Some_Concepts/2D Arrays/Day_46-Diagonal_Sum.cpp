//Time Complexity O(n^2)
#include<iostream>
#include<vector>
using namespace std;
int solution(vector<vector<int>> matrix){
    int rows = matrix.size();
    int cols = matrix[0].size();
    int sum = 0;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(i == j){
                sum += matrix[i][i];
            }
        }
    }
    return sum;
}
int main(){
    int m, n;
    cout<<"Enter the order of matrix: ";
    cin >> m >> n;
    vector<vector<int>> matrix(m, vector<int>(n));
    cout<<"Enter "<<m*n<<" elementss: "<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>matrix[i][j];
        }
    }
    cout<<"Diagonal sum: "<<solution(matrix);
}