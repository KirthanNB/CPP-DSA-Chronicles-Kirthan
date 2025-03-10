//Key Takeaways!!
//In a Rotated sorted array;
//At least one of the two parts,
//left or right is for sure sorted...

#include<iostream>
#include<vector>
using namespace std;
int solution(vector<int> &num, int tar){
    int mid, st=0, end=num.size()-1;
    while(st<=end){
        mid= st+(end - st)/2;
        if(num[mid]==tar){
            return mid;
        }
        if(num[mid]>=num[st]){
            if(num[st]<=tar && tar<=num[mid]){
                end= mid-1;
            }
            else{
                st=mid+1;
            }
        }
        else if(num[mid]<=num[end]){
            if(num[mid]<=tar && tar<=num[end]){
                st=mid+1;
            }
            else{
                end=mid-1;
            }
        }
    }
    return -1;
    
}
int main(){
    vector<int> num;
    int n, temp, tar;
    cout<<"Enter number of elements: ";
    cin >> n;
    cout << "Enter " << n << " elements: \n";
    for(int i=0; i<n; i++){
        cin >> temp;
        num.push_back(temp);
    }
    cout << "\nEnter Target: " ;
    cin >> tar;
    cout<<"\n"<<solution(num, tar);
    return 0;
}