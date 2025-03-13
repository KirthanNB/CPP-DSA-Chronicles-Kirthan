//To ease the understanding of the logic for the approach to the solution;
//Important lines are commented with their functions...

#include <iostream>
#include <vector>
using namespace std;

// Function to check if a given max pages limit is valid
bool is_valid(vector<int> &num, int n, int m, int maxbook) {
    int students = 1, pages = 0;

    for (int i = 0; i < n; i++) {
        if (num[i] > maxbook) {
            return false; // If a book has more pages than maxbook, allocation isn't possible
        }
        if (pages + num[i] <= maxbook) {
            pages += num[i]; // Allocate pages to the current student
        } else {
            students++; // Allocate to a new student
            pages = num[i]; // Start allocation for new student
            if (students > m) {
                return false; // More students needed than available
            }
        }
    }
    return true;
}

// Function to find the minimum maximum pages allocation
int solution(vector<int> &num, int n, int m) {
    if (m > n) {
        return -1; // More students than books is not possible
    }

    int sum = 0, maxElement = 0;
    for (int i = 0; i < n; i++) {
        sum += num[i];
        maxElement = max(maxElement, num[i]);
    }

    int st = maxElement, end = sum, mid, ans = -1;

    while (st <= end) {
        mid = st + (end - st) / 2;

        if (is_valid(num, n, m, mid)) {
            ans = mid;
            end = mid - 1; // Try for a smaller max allocation
        } else {
            st = mid + 1; // Increase max allocation
        }
    }
    return ans;
}

int main() {
    vector<int> num;
    int n, temp, students;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements: \n";
    for (int i = 0; i < n; i++) {
        cin >> temp;
        num.push_back(temp);
    }

    cout << "Enter number of Students: ";
    cin >> students;

    cout << solution(num, n, students) << endl;

    return 0;
}
