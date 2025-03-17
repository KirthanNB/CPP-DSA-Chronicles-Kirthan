#include<iostream>
#include<vector>
using namespace std;
int solution(vector<int> &num){
    int zero=0, one=0, two=0;
    for(int i=0; i<num.size(); i++){
            num[i]==1?one++:num[i]==0?zero++:two++;
    }
    cout<<endl<<zero;
    cout<<endl<<one;
    cout<<endl<<two;
    cout<<endl<<endl;
        for (int j = 0; j < zero; j++)
        {
            num[j]=0;
        }
        for (int k = zero; k < zero+one; k++)
        {
            num[k]=1;
        }
        for (int j = zero+one; j < zero+one+two; j++)
        {
            num[j]=2;
        }
    for(int val: num){
        cout<<val<<" ";
    }
    return 0;
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