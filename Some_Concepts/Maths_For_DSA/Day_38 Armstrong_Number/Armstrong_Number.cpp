//Number thats equal to the sum of cube of its digits
#include<iostream>
using namespace std;
string soln(int n){
    int temp=n, sum=0;
    while(n>0){
        sum += (n%10)*(n%10)*(n%10);
        n=n/10;
    }
    if(sum==temp){
        return "Armstrong Number"; 
    }
    else{
        return "Non-Armstrong Number";
    }
}
int main(){
    int n;
    cout<<"Enter number to check for Armstrong: ";
    cin>>n;
    cout<<soln(n);
    return 0;
}