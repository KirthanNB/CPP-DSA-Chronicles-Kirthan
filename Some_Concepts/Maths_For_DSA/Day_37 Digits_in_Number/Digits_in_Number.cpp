//Time Complexity: O(logn base 10)
#include<iostream>
#include<vector>
using namespace std;
vector<int> soln(int n){
    vector<int> solution;
    int sum=0;
    while(n>0){
        solution.push_back(n%10);
        sum+=n%10;
        n=n/10;
    }
    cout<<"Number of Digits: "<<solution.size()<<endl;
    cout<<"Sum of Digits: "<<sum<<endl;
    return solution;
}
int main(){
    int n;
    cout<<"Enter your Number: ";
    cin>>n;
    cout<<"Digits in the number: \n";
    for(int val: soln(n)){
        cout<<val<<" ";
    }
    return 0;
}