//Storing numbers in the following ranges;
//0s --> 0 to low-1;
//1s --> low to mid-1;
//2s --> high+1 to n-1;
//The missing gap from mid to high contains the unsorted part;
//Therefore on reducing the unsorted part ie mid == high;
//We exit from our loop...

#include<iostream>
#include<vector>
using namespace std;
int solution(vector<int> &num){
    int low=0, mid=0, high=num.size()-1, temp;
    while(mid<=high){
        if(num[mid]==0){
            temp=num[low];
            num[low]=num[mid];
            num[mid]=temp;
            mid++;
            low++;
        }
        else if(num[mid]==1){
            mid++;
        }
        else{
            temp=num[high];
            num[high]=num[mid];
            num[mid]=temp;
            high--;
        }
    }
    cout<<endl;
    for(int val: num){
        cout<<val<<" ";
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
    solution(num);
    return 0;
    
}