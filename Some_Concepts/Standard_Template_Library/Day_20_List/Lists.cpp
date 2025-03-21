#include<iostream>
#include<list>
using namespace std;
int main(){
    //Initialisation and Declaration is same as discussed in case of Vectors
    //Instead of using term vector in starting we use list
    //Also we include library list for accessing lists

    list<int> l={1, 2, 3, 4, 5};
    cout<<endl<<"Accessing all the Elements in the list:"<<endl;;
    for(int val: l){
        cout<<val<<"  ";
    }
    //All the functions discussed in case of Vector is available here;
    //Also Some more functions as mentioned is also available such as;
    //

    l.push_front(0);
    cout<<endl<<"Unlike vectors we can operate list from both front and back: "<<endl;
    cout<<endl<<"Vaules in list after using push_front function"<<endl;
    for(int val: l){
        cout<<val<<"  ";
    }
    l.pop_back();
    l.pop_front();
    cout<<endl<<"Accessing elements after using both pop_back and pop_front:"<<endl;
    for(int val: l){
        cout<<val<<"  ";
    }

    cout<<endl<<"Also funtions like size, erase, clear, begin, end, rbegin, rend, insert, front, back"<<endl;
    //Unlike vectors one cannot index the values in Lists as in vectors...

    return 0;

}