#include<iostream>
using namespace std;
int soln(int n){
    int rev=0, rem;
    while(n>0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    return rev;
}
int main(){
    int n;
    cout<<"Enter number to be reversed: ";
    cin>>n;
    cout<<"Reversed number: "<<soln(n);
    return 0;
}