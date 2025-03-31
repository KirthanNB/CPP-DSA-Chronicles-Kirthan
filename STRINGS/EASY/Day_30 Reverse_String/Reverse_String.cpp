#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string rev(string &str){
    int start=0, end= str.length()-1;
    while(start<=end){
        swap(str[start++], str[end--]);    
    }
    return str;

}
int main(){
    string str;
    cout<<"Enter Your String to be Reversed: ";
    getline(cin, str);
    cout<<str;
    string ans = rev(str);
    cout<<"\nReversed string: "<<ans;
    return 0;

}