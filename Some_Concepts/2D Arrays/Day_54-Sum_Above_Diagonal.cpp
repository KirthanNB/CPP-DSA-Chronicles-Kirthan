#include<iostream>
#include<vector>
using namespace std;
int solution(vector<vector<int>> matrix) {
    int sum = 0;
    for(int i=0; i<matrix.size(); i++)
        for(int j=i+1; j<matrix[0].size(); j++)
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