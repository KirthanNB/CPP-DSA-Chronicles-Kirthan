#include<iostream>
#include<vector>
using namespace std;
int insertion_sort(vector<int> num){
    int curr, prev;
   for(int i=1; i<num.size(); i++){
    curr=num[i];
    prev=i-1;
    while(prev>=0 && num[prev]>curr){
        num[prev+1]=num[prev];
        prev--;
    }
    num[prev+1]=curr;
   }
   for(int val:num){
    cout<<val<<" ";
   }
   return 0;
}
int main(){
vector<int> num;
int n, temp;
cout<<"Enter number of elements: ";
cin>>n;
cout<<"Enter "<< n << " elements: \n";
for(int i=0; i<n; i++){
   cin>>temp;
   num.push_back(temp);
}
insertion_sort(num);
return 0;
}