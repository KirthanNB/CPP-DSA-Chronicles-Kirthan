//Brute-Force Approach
//Time complexity O(n^3)

#include <iostream>
#include <vector>
using namespace std;

int subarraysum(vector<int> &num) {
    int n = num.size(), temp=INT8_MIN, sum=0;
    
    for (int i = 0; i < n; i++) {  
        for (int j = i; j < n; j++) {  
            for (int k = i; k <= j; k++) {  
                sum +=num[k];
            }
            if(sum>temp){
            temp=sum;
        }
        sum=0;
        }
    }
    return temp;
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