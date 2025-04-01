#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool isalphanumeric(char ch){
    if(ch>=0 && ch<=9){
        return true;
    }
    else if(ch>='a'&&ch<='z'){
        return true;
    }
    else if(ch>='A' && ch<='Z'){
        return true;
    }
    return false;
}
bool soln(string &str){
    int start=0, end=str.length()-1;
    while(start<=end){
        if(!isalphanumeric(str[start])){
            start++;
        }
        else if(!isalphanumeric(str[end])){
            end--;
        }
        else if(tolower(str[start]) ==tolower(str[end]) ){
            start++;
            end--;
        }
        else if(str[start]!=str[end]){
            return false;
        }
    }
    return true;
}
int main(){
    string str;
    cout<<"Enter Your String: ";
    getline(cin, str);
    cout<<"\nValid Palindrome: "<<soln(str);
    return 0;

}