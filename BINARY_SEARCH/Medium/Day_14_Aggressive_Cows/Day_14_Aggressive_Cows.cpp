#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool isvalid(vector<int> &num, int min_dist,int cow){
    int cows=1, pos=0;
    for(int i=0; i<num.size(); i++){
        if(num[i]-num[pos]>=min_dist){
            cows++;
            pos=i;
        }
    }
    return cows>=cow?true:false;
}

int solution(vector<int> &num, int cow){
    int end=0, st=1, mid, ans=-1;
    sort(num.begin(), num.end());
    end=num[num.size()-1]-num[0];
    while(st<=end){
        mid=st+(end-st)/2;
        if(isvalid(num, mid, cow)){
            st=mid+1;
            ans=mid;
        }
        else{
           end=mid-1;
        }
    }
    return ans;
}
int main(){
    vector<int> num;
    int n, temp, cow;
    cout<<"Enter number of stals: ";
    cin >> n;
    cout << "Enter the distance between " << n << " stals: \n";
    for(int i=0; i<n; i++){
        cin >> temp;
        num.push_back(temp);
    }
    cout<<endl<<"Enter Number of Cows: ";
    cin>>cow;
    cout<<"\n"<<solution(num, cow);
    return 0;
    
}