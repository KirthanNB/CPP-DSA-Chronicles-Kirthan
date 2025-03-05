//Time Complexity O(nlogn)

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int answer(vector<int> &num){
    sort(num.begin(), num.end());
    int freq=1;
    for(int i=1; i<num.size(); i++){
        if(num[i]==num[i-1]){
            freq++;
        }
        else{
            freq=1;
        }
        if (freq>num.size()/2){
            return num[i];
        }
    }
}
int main(){
    vector<int> num;
    int n, temp;
    cout<<"Enter number of elements: ";
    cin >> n;
    cout << "Enter " << n << " elements: \n";
    for(int i=0; i<n; i++){
        cin >> temp;
        num.push_back(temp);
    }
    cout<<"\n"<<answer(num);
    return 0;
    
}