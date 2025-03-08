#include<iostream>
#include<vector>
using namespace std;
int solution(vector<int> &num){
    int vol=0, height;
    for(int i=0; i<num.size(); i++){
        for(int j=i; j<num.size(); j++){
            height=min(num[i], num[j]);
            vol=max((j-i)*height, vol);
        }
    }
    return vol;
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