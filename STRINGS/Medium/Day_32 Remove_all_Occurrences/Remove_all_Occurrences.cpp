#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
//str.find(substring)-->Start position if exists
//str.erase(st indx, end indx)--> Delete that particular elements in str
string soln(string &str, string &part){
    int indx;
    while(str.length()>part.length()){
        indx=str.find(part);
        if(indx!=-1){
            str.erase(indx, part.length());
        }
        else if(indx==-1){
            return str;
        }
    }
    return str;
}
int main(){
    string str, part;
    cout<<"Enter Your String: ";
    getline(cin, str);
    cout<<"Enter your part to check occurrences: ";
    cin>>part;
    cout<<"\nSolution: "<<soln(str, part);
    return 0;
}