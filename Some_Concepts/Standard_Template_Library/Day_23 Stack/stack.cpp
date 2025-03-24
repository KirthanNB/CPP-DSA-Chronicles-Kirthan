//Last In First Out Structure
#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> s;
    stack<int> s1;
    // Some available Functions is stack library
    // push     TC=O(1)
    // emplace      TC=O(1)
    // top      TC=O(1)
    // pop      TC=O(1)
    // size
    // empty
    // swap

    //Pusing elements into stack

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.emplace(12);
    s.emplace(73);
    s.emplace(14);
    //Last inserted element is the top element
    cout<<"Accesing the top element: "<<s.top()<<endl;
    //poping out the top element
    s.pop();
    cout<<"Accessing the top element after poping out the previous one: "<<s.top()<<endl;

    cout<<"\nSize of s before swapping: "<<s.size();
    //swapping elements from s to s1;
    s1.swap(s);
    cout<<"\nSize of s after swapping: "<<s.size();
    cout<<"\nSize of s1 after swapping: "<<s1.size()<<endl;


    //Accesing the elements of Stack meanwhile emptying the stack
    cout<<"\nAccessing elements of s1 after swapping..\n";
    while(!s1.empty()){
        cout<<s1.top()<<"   ";
        s1.pop();
    }



}
