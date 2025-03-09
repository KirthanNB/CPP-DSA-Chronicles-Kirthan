#include<iostream>
#include<vector>
using namespace std;
vector<int> solution(vector<int> &num){
    vector<int> ans;
    int product=1;
    for(int i=0; i<num.size(); i++){
        for(int j=0; j<num.size(); j++){
            if(i!=j){
                product*=num[j];
            }
        }
        ans.push_back(product);
        product=1;
    }
    return ans;
}
int main(){
    vector<int> num;
    int n, temp;
    cout<<"Enter number of elements: ";
    cin >> n;
    cout << "Enter " << n << " elements: \n";
    for(int i=0; i<n; i++){
        cin >> temp;
        num.push_back(temp);
    }
    for(int val: solution(num)){
        cout<<"\n"<<val;
    }
    return 0;
    
}