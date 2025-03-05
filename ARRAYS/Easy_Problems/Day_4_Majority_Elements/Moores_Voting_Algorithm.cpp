//Time Complexity O(n)
//Majority Element Always Exists

#include<iostream>
#include<vector>
using namespace std;
int answer(vector<int> &num){
    int ans, freq=0;
    for(int i=0; i<num.size(); i++){
        if(freq==0){
            ans=num[i];
        }
        if(ans==num[i]){
            freq++;
        }
        else{freq--;}
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
    cout<<"\n"<<answer(num);
    return 0;
    
}