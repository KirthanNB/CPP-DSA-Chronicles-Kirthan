//To evaluate x^n in Time Complexity of O(logn)

#include<iostream>
#include<vector>
using namespace std;
double answer(double x, int n){
    long binform=(n>0?n:-n);
    double ans=1;
    if(n=0){
        return 1.0;
    }
    if(n=1){
        return x;
    }
    while(binform>0){
        if(binform%2==1){
            ans*=x;
        }
        x*=x;
        binform/=2;
    }
    if (n<0){
        return 1/ans;
    }
    return ans;
}
int main(){
    int n, x;
    cout<<"Enter base: ";
    cin >> x;
    cout << "Enter power: ";
    cin >> n;
    cout<<"\n"<<answer(x, n);
    return 0;
}