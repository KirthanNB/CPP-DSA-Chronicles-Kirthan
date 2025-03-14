#include<iostream>
#include<vector>
using namespace std;
bool isvalid(vector<int> &num, int m, int maxtime){
    int painters=1, sum=0;
    for(int i=0; i<num.size(); i++){
        if(num[i]>maxtime){
            return false;
        }
        else if(sum+num[i]<=maxtime){
            sum+=num[i];
        }
        else{
            sum=num[i];
            painters++;
        }
    }
    return painters>m?false:true;
}
int solution(vector<int> &num, int m){
    if(m>num.size()){
        return -1;
    }
    int ans=-1, st=-1, end, mid, sum;
    for(int i=0; i<num.size(); i++){
        sum+=num[i];
        st=max(st, num[i]);
    }
    end=sum;
    while(st<=end){
        mid=st+(end-st)/2;
        if(isvalid(num, m, mid)){
            end=mid-1;
            ans=mid;
        }
        else{
            st=mid+1;
        }
    }
    return ans;
}
int main(){
    vector<int> num;
    int n, temp, m;
    cout<<"Enter number of elements: ";
    cin >> n;
    cout << "Enter " << n << " elements: \n";
    for(int i=0; i<n; i++){
        cin >> temp;
        num.push_back(temp);
    }
    cout<<"\nEnter Number of Painters: ";
    cin>>m;
    cout<<"\n"<<solution(num, m);
    return 0;    
}