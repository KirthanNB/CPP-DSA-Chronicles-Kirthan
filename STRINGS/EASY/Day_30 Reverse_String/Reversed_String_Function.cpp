#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string rev(string &str){
    reverse(str.begin(), str.end());    //In-built function to reverse a string
    return str;

}
int main(){
    string str;
    cout<<"Enter Your String to be Reversed: ";
    getline(cin, str);
    string ans = rev(str);
    cout<<"\nReversed string: "<<ans<<endl;
    return 0;
}