//Formula for LCM is given by;
//m*n=GCD(m, n)*LCM(m, n);
//Therefore;
//LCM(m, n)=m*n/GCD(m, n)

#include<iostream>
using namespace std;
int soln(int m, int n){
    int a=m, b=n;
    while(m>0&&n>0){
        if(m>n){
            m=m%n;
        }
        else if(n>m){
            n=n%m;
        }
    }
    if(m==0){
        return a*b/n;       
    }
    if(n==0){
        return a*b/m;    
    }
}
int main(){
    int n, m;
    cout<<"Enter first number: ";
    cin>>n;
    cout<<"Enter Second Number: ";
    cin>>m;
    cout<<"LCM of given numbers: "<<soln(m, n);
    return 0;
}
