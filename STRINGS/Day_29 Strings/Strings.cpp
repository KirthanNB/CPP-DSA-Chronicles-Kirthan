#include<iostream>
#include<string>
using namespace std;
int main(){
    char str[]= {'K', 'i', 'r', 't', 'h', 'a','n', '\0'};
    cout<<str<<endl;   //Constant pointers
    char strr[]="Kirthan";   //string litterals; cannot be resized
    cout<<strr<<endl; 
    string name, exp;
    cout<<"Enter space seperated values: ";
    cin>>exp;
    cout<<"Values stored in cin function: "<<exp<<endl;
    //Concatenation in strings
    string first_name="Hello ";  //Dynamic in nature, can be resized during runtime
    string second_name="World";
    string total= first_name+second_name;
    cout<<endl<<"Concatenated String: "<<total;
    //Comparing string; Checks Lexicographically...
    cout<<"\nComparing Strings given: "<<(first_name==second_name);
    return 0;
}