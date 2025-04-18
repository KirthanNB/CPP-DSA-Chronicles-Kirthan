//Time Complexity O(n)
#include<iostream>
#include<vector>
using namespace std;
int solution(vector<vector<int>> matrix){
    int rows = matrix.size();
    int cols = matrix[0].size();
    int sum = 0;
    for(int i=0; i<rows; i++){
        sum += matrix[i][i];
    }
    return sum;
}
int main(){
    int m;
    cout<<"Enter the order of square matrix: ";
    cin >> m;
    vector<vector<int>> matrix(m, vector<int>(m));
    cout<<"Enter "<<m*m<<" elementss: "<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            cin>>matrix[i][j];
        }
    }
    cout<<"Diagonal sum: "<<solution(matrix);
}