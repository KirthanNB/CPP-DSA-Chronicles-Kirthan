#include<iostream>
#include<vector>
using namespace std;
int solution(vector<vector<int>> matrix){
    int rows = matrix.size();
    int cols = matrix[0].size(); 
    int maxsum = INT8_MIN, currsum;
    for(int j=0; j<cols; j++){
        currsum = 0;
        for(int i=0; i<rows; i++){
            currsum += matrix[i][j];
        }
        if(currsum>maxsum){
            maxsum = currsum;
        } 
    }
    return maxsum;
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