//Time Complexity O(n^2)

#include<iostream>
#include<vector>
using namespace std;
int selection_sort(vector<int> num){
    int temp, indx;
    for(int i=0; i<num.size()-1; i++){
        indx=i;
        for(int j=i+1; j<num.size(); j++){
            if(num[j]<num[indx]){
                indx=j;
            }
        }
        temp=num[indx];
        num[indx]=num[i];
        num[i]=temp;
    }
    for(int val: num){
        cout<<endl<<val<<" ";
    }

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
selection_sort(num);
return 0;
}