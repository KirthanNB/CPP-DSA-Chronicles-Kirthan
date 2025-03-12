#include <iostream>
#include <vector>
using namespace std;

int solution(vector<int> &num) {
    int st = 0, end = num.size() - 1, mid;
    
    while (st <= end) {
        mid = st + (end - st) / 2;
        
        if ((mid == 0 || num[mid] != num[mid - 1]) && (mid == num.size() - 1 || num[mid] != num[mid + 1])) {
            return num[mid];
        }
        if (mid % 2 == 0) {
            if (num[mid] == num[mid + 1]) {
                st = mid + 2; //moving beyond the duplicate
            } else {
                end = mid - 1;
            }
        } 
        else {
            if (num[mid] == num[mid - 1]) {
                st = mid + 1;
            } else {
                end = mid - 1;
            }
        }
    }
    return -1;
}

int main() {
    vector<int> num;
    int n, temp;
    
    cout << "Enter number of elements: ";
    cin >> n;
    
    cout << "Enter " << n << " elements (sorted with one unique element): \n";
    for (int i = 0; i < n; i++) {
        cin >> temp;
        num.push_back(temp);
    }
    
    cout << "\nUnique element: " << solution(num) << endl;
    
    return 0;
}
