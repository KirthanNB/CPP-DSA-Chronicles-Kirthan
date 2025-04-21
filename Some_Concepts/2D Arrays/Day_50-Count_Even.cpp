#include<iostream>
#include<vector>
using namespace std;
int solution(vector<vector<int>> matrix) {
    int count = 0;
    for(auto row : matrix)
        for(auto x : row)
            if(x % 2 == 0) count++;
    return count;
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