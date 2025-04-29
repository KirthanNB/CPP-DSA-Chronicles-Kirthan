//Two_Sum

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main(){
    int n,target;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    cout<<"Enter the target sum: ";
    cin>>target;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    unordered_map<int,int> m;
    for(int i=0;i<n;i++){
        if(m.find(target-nums[i])!=m.end()){
            cout<<"Two Sum Solution is: "<<i<<" "<<m[target-nums[i]]<<endl;
            return 0;
        }
        m[nums[i]]=i;
    }
    cout<<"No two sum solution"<<endl;
    return 0;
}