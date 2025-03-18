//Space Complexity = O(n+m);
//Time Complexity = O(n+m);

#include<iostream>
#include<vector>
using namespace std;
vector<int> solution(vector<int> &num, vector<int> &nums) {
    vector<int> ans;
    int j=0, k=0;
    while(j<num.size()||k<nums.size()){
        if(j>=num.size()&&k>=nums.size()){
            break;
        }
        if(j>=num.size()){
            ans.push_back(nums[k]);
            k++;
        }     
        if(k>=nums.size()){
            ans.push_back(num[j]);
            j++;
        }
        if(num[j]<nums[k]){
            ans.push_back(num[j]);
            j++;
        }
        else if(nums[k]<num[j]){
            ans.push_back(nums[k]);
            k++;
        }
        else if(num[j]==nums[k]){
            ans.push_back(num[j]);
            j++;
        }
    }
    return ans;
}
int main(){
    vector<int> num, nums, ans;
    int n, m, temp;
    cout<<"Enter number of elements for first array: ";
    cin >> n;
    cout << "Enter " << n << " elements: \n";
    for(int i=0; i<n; i++){
        cin >> temp;
        num.push_back(temp);
    }
    cout<<"Enter number of elements for second array: ";
    cin >> m;
    cout << "Enter " << m << " elements: \n";
    for(int i=0; i<m; i++){
        cin >> temp;
        nums.push_back(temp);
    }
    cout<<"Getting your Answers:\n\n";
    ans=solution(num, nums);
    for(int val: ans){
    cout<<"\n"<<val;
    }
    return 0;
    
}