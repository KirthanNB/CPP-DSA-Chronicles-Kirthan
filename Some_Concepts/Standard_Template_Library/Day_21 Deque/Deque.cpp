#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> d={12, 23, 34, 45};
    //push_back, push-front;
    //emplace_back, emplace_front
    //pop_back, pop_front
    //size
    //erase
    //clear
    //begin
    //end
    //rbegin
    //rend
    //insert
    //front
    //back
    //All the above functions are discussed in earlier codes
    //deque is almost exactly list
    //Since list cant be accessed using indices,
    //deque can be accessed using indices
    cout<<"Accessing elements in usual method:"<<endl;
    for(int val: d){
        cout<<val<<"   ";
    }
    cout<<endl<<"Accessing elements using indices:"<<endl;
    for(int i=0; i<d.size(); i++){
        cout<<d[i]<<"   ";
    }
    cout<<endl;
    return 0;
}