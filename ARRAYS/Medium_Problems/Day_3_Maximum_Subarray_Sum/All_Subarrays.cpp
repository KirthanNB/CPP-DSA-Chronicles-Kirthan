//To print all possible Subarray
//Though not part of DSA Question;
//This is basics to cover some medium type Questions in DSA

#include <iostream>
#include <vector>
using namespace std;

void subarraysum(vector<int> &num) {
    int n = num.size();
    
    for (int i = 0; i < n; i++) {  
        for (int j = i; j < n; j++) {  
            for (int k = i; k <= j; k++) {  
                cout << num[k];
            }
            cout<<" ";
        }
        cout << endl;  
    }
}

int main() {
    vector<int> num;
    int n, temp;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements: \n";
    for (int i = 0; i < n; i++) {
        cin >> temp;
        num.push_back(temp);
    }

    cout << "\nSubarrays:\n";
    subarraysum(num);
    
    return 0;
}
