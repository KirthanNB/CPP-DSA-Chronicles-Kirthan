//Brute-Force Approach
//Time complexity O(n^2)

#include <iostream>
#include <vector>
using namespace std;

int subarraysum(vector<int> &num) {
    int n = num.size(), sum=0, maximum=0;
    
    for (int i = 0; i < n; i++) {  
        for (int j = i; j < n; j++) {  
            sum+=num[j];
            maximum=max(maximum, sum);
        }
        sum=0;
    }
    return maximum;
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
    cout<<"\n"<<subarraysum(num);
    
    return 0;
}