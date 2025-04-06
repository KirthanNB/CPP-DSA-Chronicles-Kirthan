#include<iostream>
#include<vector>
using namespace std;
string solution(int &n){
    for(int i=2; i*i<=n; i++){  //Check the iteration is starting from 2 while condition is for i*i<=n
        if(n%i==0){
            return "Non-Prime";
        }
    }
    return "Prime";
}
int main(){
    vector<int> num;
    int n;
    cout<<"Enter number to check for prime: ";
    cin >> n;
    cout<<solution(n);
    return 0; 
}