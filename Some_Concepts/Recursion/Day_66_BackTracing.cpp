#include <iostream>
#include <vector>
using namespace std;

// Function to generate all subsets using backtracking
void generateSubsets(vector<int>& nums, vector<int>& current, int index) {
    // Base case: If we've considered all elements
    if (index == nums.size()) {
        // Print the current subset
        cout << "{ ";
        for (int num : current) {
            cout << num << " ";
        }
        cout << "}" << endl;
        return;
    }

    // Exclude the current element and move to the next
    generateSubsets(nums, current, index + 1);

    // Include the current element in the subset
    current.push_back(nums[index]);
    generateSubsets(nums, current, index + 1);

    // Backtrack: Remove the last element
    current.pop_back();
}

int main() {
    vector<int> nums;
    int n;
    cout<<"Enter size of example set: ";
    cin>>n; // Example set
    cout<<"Enter elements of example set: ";
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        nums.push_back(num);
    }
    // Vector to store the current subset
    vector<int> current;

    cout << "All subsets:\n";
    generateSubsets(nums, current, 0);

    return 0;
}
