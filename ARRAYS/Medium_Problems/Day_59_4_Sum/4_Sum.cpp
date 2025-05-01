//4_Sum

// Example:
// Input: nums = [2,2,2,2,2], target = 8
// Output: [[2,2,2,2]]
 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> nums;
    int n, target;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        nums.push_back(x);
    }
    cout << "Enter the target sum: ";
    cin >> target;
    sort(nums.begin(), nums.end());
    vector<vector<int>> result;
    for(int i = 0; i < nums.size(); i++){
        if(i > 0 && nums[i] == nums[i-1]) continue; // Skip duplicates
        for(int j = i + 1; j < nums.size(); j++){
            if(j > i + 1 && nums[j] == nums[j-1]) continue; // Skip duplicates
            int left = j + 1, right = nums.size() - 1;
            while(left < right){
                int sum = nums[i] + nums[j] + nums[left] + nums[right];
                if(sum == target){
                    result.push_back({nums[i], nums[j], nums[left], nums[right]});
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
    }
    cout << "The quadruplets that sum to " << target << " are: " << endl;
    for(auto &quad : result){
        cout << "[";
        for(int i = 0; i < quad.size(); i++){
            cout << quad[i];
            if(i < quad.size() - 1) cout << ", ";
        }
        cout << "]" << endl;
    }
    if(result.empty()){
        cout << "No quadruplets found that sum to " << target << endl;
    }
    return 0; 
}