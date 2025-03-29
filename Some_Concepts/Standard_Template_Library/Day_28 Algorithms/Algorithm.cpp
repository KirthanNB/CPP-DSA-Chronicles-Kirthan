#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    // sort(arr, arr+n);
    // sort(arr, arr+n, greater<int>());
    // sort(v.begin(), v.end());
    // reverse(v.begin(), v.end());
    // next_permutation(v.begin(), v.end());
    // swap(a, b);
    // max_element(v.begin, v.end());
    // min_element(v.begin, v.end());
    // binary_search(v.begin, v.end(), target);
    // Count set bill
    // __builtin_popcount()    for int
    // __builtin_popcountl()    for long int
    // __builtin_popcountll()   for long long int
    vector<int> vec{1, 5, 2, 6, 23, 12};
    sort(vec.begin(), vec.end());
    cout << "Sorted elements in ascending order: \n";
    for (int val : vec)
    {
        cout << val << "   ";
    }
    cout << endl;
    cout << "Sorted elements in decending order: \n";
    sort(vec.begin(), vec.end(), greater<int>());
    for (int val : vec)
    {
        cout << val << "   ";
    }
    cout << endl;
    return 0;
}