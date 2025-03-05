//Time complexity O(n^2)

#include<iostream>
#include<vector>
using namespace std;
int answer(vector<int> &num){
    int freq=0;
    for(int val: num){
        for(int loop: num){
            if(val==loop){
                freq++;
            }
        }
        if(freq>num.size()/2){
            return val;
        }
        freq=0;
    }
    return -1;
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