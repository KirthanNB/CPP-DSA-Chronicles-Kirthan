//Time complexity O(n^2)

#include<iostream>
#include<vector>
using namespace std;
int bubble_sort(vector<int> num){
    int temp;
    for(int i=0; i<num.size(); i++){
        bool is_swap=false; //Slightly optimisating our code to ignore looping in case of already sorted.
        for(int j=i; j<num.size(); j++){
            if(num[j]<num[i]){
                temp=num[i];
                num[i]=num[j];
                num[j]=temp;
                is_swap=true;
            }
        }
        if(!is_swap){
            break;
        }
    }
    cout<<"Sorted array: "<<endl;
    for(int val: num){
        cout<<val<<" ";
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
bubble_sort(num);
return 0;
}