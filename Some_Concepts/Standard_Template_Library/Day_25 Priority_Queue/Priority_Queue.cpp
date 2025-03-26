//Last In First Out Structure
#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int> s;
    priority_queue<int> s1;
    //Creating s2 to show to reverse the sorting
    priority_queue<int, vector<int>, greater<int>> s2; //where greater<int> is a functor
    // Some available Functions is queue library
    // push      TC=O(log n)
    // emplace  TC=O(log n)
    // top    TC=O(1)
    // pop    TC = O(log n)
    // size
    // empty
    // swap

    //Pusing elements into queue

    s.push(5);
    s.push(6);
    s.emplace(73);
    s.push(3);
    s.push(1);
    s.emplace(14);
    s.push(4);
    s.push(2);
    s.emplace(12);
    //Elements get sorted and top will be the value with highest value
    cout<<"Accesing the top element: "<<s.top()<<endl;
    //poping out the top element
    s.pop();
    cout<<"Accessing the top element after poping out the previous one: "<<s.top()<<endl;

    cout<<"\nSize of s before swapping: "<<s.size();
    //swapping elements from s to s1;
    s1.swap(s);
    cout<<"\nSize of s after swapping: "<<s.size();
    cout<<"\nSize of s1 after swapping: "<<s1.size()<<endl;


    //Accesing the elements of Stack meanwhile emptying the queue
    cout<<"\nAccessing elements of s1 after swapping..\n";
    while(!s1.empty()){
        cout<<s1.top()<<"   ";
        s1.pop();
    }

    s2.push(5);
    s2.push(6);
    s2.emplace(73);
    s2.push(3);
    s2.push(1);
    s2.emplace(14);
    s2.push(4);
    s2.push(2);
    s2.emplace(12);
    cout<<"\nAccessing elements of s2 after using functor to reverse sorting..\n";
    while(!s2.empty()){
        cout<<s2.top()<<"   ";
        s2.pop();
    }

 return 0;

}
