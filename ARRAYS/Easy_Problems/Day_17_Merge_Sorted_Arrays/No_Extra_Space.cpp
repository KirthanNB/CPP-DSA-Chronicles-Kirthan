//Space Complexity = O(1);
//Time Complexity = O(n+m);

#include<iostream>
#include<vector>
using namespace std;
int solution(vector<int> &a, vector<int> &b){
    int indx=a.size()-1, j=(a.size()-b.size())-1, k=b.size()-1, temp;
    while(j>=0||k>=0){
        if(j>=0&&k>=0){
        if(a[j]>b[k]){
            a[indx--]=a[j--];
        }
        else if(b[k]>a[j]){
            a[indx--]=b[k--];
        }
        else if(a[j]==b[k]){
            a[indx--]=a[j--];
        }
    }
    else{
        if(j<0){
            a[indx--]=b[k--];
        }
        else if (j >= 0) {
            a[indx--] = a[j--]; 
        }
    }
    }
    cout<<endl;
    for(int val: a){
        cout<<val<<" ";
    }
    return 0;
}
int main(){
    vector<int> a, b;
    int n, temp, m;
    cout<<"Enter number of elements in first array: ";
    cin >> n;
    cout << "Enter " << n << " elements: \n";
    for(int i=0; i<n; i++){
        cin >> temp;
        a.push_back(temp);
    }
    cout<<"Enter number of elements in second array: ";
    cin >> m;
    cout << "Enter " << m << " elements: \n";
    for(int i=0; i<m; i++){
        cin >> temp;
        b.push_back(temp);
    }
    for(int i=n; i<n+m; i++){
        a.push_back(0);
    }

    solution(a, b);
    return 0;
}