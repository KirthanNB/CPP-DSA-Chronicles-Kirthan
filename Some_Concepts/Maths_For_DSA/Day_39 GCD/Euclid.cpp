#include<iostream>
using namespace std;
int soln(int m, int n){
    while(m>0&&n>0){
        if(m>n){
            m=m%n;
        }
        else if(n>m){
            n=n%m;
        }
    }
    if(m==0){
        return n;
    }
    if(n==0){
        return m;
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