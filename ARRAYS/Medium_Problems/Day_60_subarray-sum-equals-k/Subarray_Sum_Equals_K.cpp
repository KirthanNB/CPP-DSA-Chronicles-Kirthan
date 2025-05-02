//Sub-Array Sum Equals K

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main(){
    int n, k;
    cout << "Enter the size of the array: ";
    cin >>n;
    cout << "Enter the target sum k: ";
    cin >> k;
    cout << "Enter the elements of the array: ";
    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    unordered_map<int, int> prefixSumCount;
    prefixSumCount[0] = 1; // Initialize with sum 0 count as 1
    int currentSum = 0, count = 0;
    
    for(int i = 0; i < n; i++){
        currentSum += nums[i];
        if(prefixSumCount.find(currentSum - k) != prefixSumCount.end()){
            count += prefixSumCount[currentSum - k];
        }
        prefixSumCount[currentSum]++;
    }
    
    cout << count << endl;
    return 0;
}
