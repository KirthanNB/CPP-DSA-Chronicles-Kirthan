//

#include<iostream>
#include<vector>
using namespace std;
int solution(vector<int> &num){
    int st=1, end=num.size()-1, mid;
    while(st<=end){
        mid=st+(end-st)/2;
        if(num[mid-1]<num[mid]&&num[mid]>num[mid+1]){
            return mid;
        }
        if(num[mid-1]<=num[mid] && num[mid]<=num[mid+1]){
            st=mid+1;
        }
        else if(num[mid-1]>=num[mid] && num[mid]>=num[mid+1]){
            end=mid-1;
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
    cout<<"\n"<<solution(num);
    return 0;
    
}