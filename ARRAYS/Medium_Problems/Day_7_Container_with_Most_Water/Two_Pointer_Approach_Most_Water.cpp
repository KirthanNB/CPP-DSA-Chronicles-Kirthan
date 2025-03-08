#include<iostream>
#include<vector>
using namespace std;
int solution(vector<int> &num){
    int width, height, i=0, j=num.size()-1, vol=0;
    while(i<j){
        height= min(num[i], num[j]);
        vol=max((j-i)*height, vol);
        num[i]>num[j]?j--:i++;
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
        cout << i+1 << ": ";
        cin >> temp;
        num.push_back(temp);
    }
    cout<<"\n"<<solution(num);
    return 0;
}