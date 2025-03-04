//Kadan's Algorithm is most optimistic approach to solve this problem

#include<iostream>
#include<vector>
using namespace std;
int answer(vector<int> &num){
    int sum=0, maximum=INT8_MIN;
    for(int val: num){
        sum+=val;
        maximum=max(maximum, sum);
        if(sum<0){
            sum=0;
        }
    }
    return maximum;
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