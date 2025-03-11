#include<iostream>
#include<vector>
using namespace std;
int solution(vector<int> &num){
    for(int i=1; i<num.size();i++){
        if(num[i-1]<num[i]&&num[i+1]<num[i]){
            return i;
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