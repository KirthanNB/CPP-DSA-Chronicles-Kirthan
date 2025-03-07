#include<iostream>
#include<vector>
using namespace std;
int solution(vector<int> &num){
    int bestbuy=num[0], maxprofit=INT8_MIN;
    for(int i=1; i<num.size(); i++){
        if(num[i]>bestbuy){
            maxprofit=max(num[i]-bestbuy, maxprofit);
        }
        bestbuy=min(bestbuy, num[i]);
    }

    return maxprofit;
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