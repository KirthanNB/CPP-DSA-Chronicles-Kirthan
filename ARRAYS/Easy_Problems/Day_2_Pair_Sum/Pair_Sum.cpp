//Return the vector as answer that containes numbers that sum up to target given...
//Given array is sorted
//Answer alsways exists
//Two Pointer Approach
//Time Complexity O(n)

#include<iostream>
#include<vector>
using namespace std;
vector<int> answer(vector<int> &num, int target){
    vector<int> ans;
    int sum=0, i=0, j=num.size()-1;
    while(i<j){
        sum=num[i]+num[j];
        if(sum>target){
            j--;
        }
        else if(sum<target){
            i++;
        }
        else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return {};
}
int main(){
    vector<int> num;
    vector<int> ans;
    int n, temp, target;
    cout<<"Enter number of elements: ";
    cin >> n;
    cout << "Enter " << n << " elements: \n";
    for(int i=0; i<n; i++){
        cin >> temp;
        num.push_back(temp);
    }
    cout<<"Enter target Sum: ";
    cin>>target;
    ans=answer(num, target);
    for(int val: ans){
        cout<<val<<"  ";
    }
    return 0;
    
}