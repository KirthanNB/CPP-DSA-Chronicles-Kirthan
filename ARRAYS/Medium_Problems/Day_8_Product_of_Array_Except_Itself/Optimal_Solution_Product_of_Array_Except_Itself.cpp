#include<iostream>
#include<vector>
using namespace std;
vector<int> solution(vector<int> &num){
    vector<int> ans;
    vector<int> prefix;
    vector<int> suffix;
    int pre=1, suff=1, i=0, j=num.size()-1;
    for(int i=1; i<num.size(); i++){
        pre *=num[i-1];
        prefix.push_back(pre);
        suff*=num[num.size()-i];
        suffix.push_back(suff);
        ans.push_back(prefix[i]*suffix[num.size()-i]);
    }
    return ans;
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
    for(int val: solution(num)){
        cout<<"\n"<<val;
    }
    return 0;
    
}