#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//3 Sum problem
// Given an integer array nums, target, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == target.
// Notice that the solution set must not contain duplicate triplets.
int main(){
    int n, target;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    cout << "Enter the target sum: ";
    cin >> target;
    
    sort(nums.begin(), nums.end());
    
    vector<vector<int>> result;
    
    for(int i = 0; i < n - 2; i++){
        if(i > 0 && nums[i] == nums[i - 1]) continue; // Skip duplicates
        int left = i + 1, right = n - 1;
        while(left < right){
            int sum = nums[i] + nums[left] + nums[right];
            if(sum == target){
                result.push_back({nums[i], nums[left], nums[right]});
                while(left < right && nums[left] == nums[left + 1]) left++; // Skip duplicates
                while(left < right && nums[right] == nums[right - 1]) right--; // Skip duplicates
                left++;
                right--;
            } else if(sum < target){
                left++;
            } else {
                right--;
            }
        }
    }
    
    cout << "Triplets that sum to " << target << " are:\n";
    for(auto triplet : result){
        cout << "[" << triplet[0] << ", " << triplet[1] << ", " << triplet[2] << "]\n";
    }
    
    return 0;
}