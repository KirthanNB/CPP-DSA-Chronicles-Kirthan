#include <iostream>
#include <vector>
#include <algorithm> // For sorting

using namespace std;

// Function to generate the next lexicographical permutation manually
bool nextLexPermutation(vector<int> &arr) {
    int n = arr.size();
    
    // Step 1: Find the rightmost element that is smaller than its next element
    int i = n - 2;
    while (i >= 0 && arr[i] >= arr[i + 1]) {
        i--;
    }

    // If no such element is found, we are at the last permutation
    if (i < 0) return false;

    // Step 2: Find the smallest element on the right of 'i' that is larger than arr[i]
    int j = n - 1;
    while (arr[j] <= arr[i]) {
        j--;
    }

    // Step 3: Swap arr[i] and arr[j]
    swap(arr[i], arr[j]);

    // Step 4: Reverse the part from i+1 to end to get the smallest next permutation
    reverse(arr.begin() + i + 1, arr.end());

    return true;  // Return true if the next permutation is generated
}

// Function to generate all lexicographical permutations
vector<vector<int>> generateLexPermutations(vector<int> arr) {
    vector<vector<int>> permutations;
    
    // Step 1: Sort the array to start with the smallest permutation
    sort(arr.begin(), arr.end());

    // Step 2: Generate all permutations
    do {
        permutations.push_back(arr);
    } while (nextLexPermutation(arr));  // Use our manual function

    return permutations;
}

int main() {
    vector<int> arr;  // Input array
    int temp, n;
    cout<<"Enter number of elements: ";
    cin>>n;
    cout<<"Enter "<<n<<" elements:\n";
    for(int i=0; i<n; i++){
        cin>>temp;
        arr.push_back(temp);
    }
    // Get all lexicographically ordered permutations
    vector<vector<int>> result = generateLexPermutations(arr);

    // Display all permutations
    cout << "Lexicographically Ordered Permutations:\n";
    for (const auto &perm : result) {
        for (int num : perm) {
            cout << num << " ";
        }
        cout << endl;
    }

    

    return 0;
}
 