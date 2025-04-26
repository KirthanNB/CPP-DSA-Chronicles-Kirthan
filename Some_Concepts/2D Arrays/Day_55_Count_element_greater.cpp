#include<iostream>
#include<vector>
using namespace std;
int solution(vector<vector<int>> matrix, int x) {
    int count = 0;
    for(auto row : matrix)
        for(auto val : row)
            if(val > x) count++;
    return count;
}
int main(){
    int m, n, temp, elem;
    cout<<"Enter the order of matrix: ";
    cin >> m >> n;
    vector<vector<int>> matrix(m, vector<int>(n));
    cout << "Enter " << n*m << " elements: \n";
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>> matrix[i][j];
        }
    }
    cout<<"Enter number above which the number of greater elements to be found: ";
    cin>>elem;
    cout<<"Max Row Sum is: "<<solution(matrix, elem);
    return 0;
}