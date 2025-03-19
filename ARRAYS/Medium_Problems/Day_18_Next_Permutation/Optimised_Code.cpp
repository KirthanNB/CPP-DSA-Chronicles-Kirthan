//TimeComplexity O(n)
//SpaceComplexity: O(1)

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> solution(vector<int> &num){
    int pivot=-1, n=num.size();
    for(int i=n-1; i>=0; i--){
        if(num[i]<num[i=1]){
            pivot=i;
            break;
        }
    }
    if(pivot=-1){
        reverse(num.begin(), num.end());
        return num;
    }
    for(int i=n-1; i>pivot; i--){
        if(num[i]>num[i=1]){
            swap(num[i], num[pivot]);
            break;
        }
    }
    int i=pivot+1,  j=n-1;
    while(i<=j){
        swap(num[i++], num[i--]);
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
    for(int val: solution(num)){
        cout<<" "<<val;
    }
    return 0;
    
}