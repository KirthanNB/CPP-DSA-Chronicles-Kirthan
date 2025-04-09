#include<iostream>
using namespace std;
int soln(int m, int n){
    while(m>0&&n>0){
        if(m>n){
            m=m-n;
        }
        else if(n>m){
            n=n-m;
        }
        else if(m==n){
            return n;
        }
    }
}
int main(){
    int m,n;
    cout<<"Enter first number: ";
    cin>>m;
    cout<<"Enter second number: ";
    cin>>n;
    cout<<"GCD of Given numbers: "<<soln(m, n);
    return 0; 
}