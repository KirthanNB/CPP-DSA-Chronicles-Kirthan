#include<iostream>
#include<set>
using namespace std;
int main(){
    set <int> s;
    // insert       TC= O(log n)
    // emplace      TC= O(log n)
    // count        TC= O(log n)
    // erase        TC= O(log n)
    // find         TC= O(log n)
    // size         TC= O(log n)
    // empty        TC= O(log n)
    s.emplace(2);
    s.emplace(3);
    s.emplace(5);
    
    s.emplace(1);
    
    s.emplace(9);
    s.emplace(12);
    s.emplace(45);
    
    s.insert(1);

    //Accessing set

    //Note that all values are sorted in ascending values
    //Also duplicated items are neglected
    cout<<"Accessing all the elements of set:\n";
    for(auto val: s){
        cout<<val<<"  ";
    }
    cout<<endl;

    //lower_bound-->(Should not be Less than key given)
    //Return the address of the element just as given if  found else the element just greater to it

    cout<<"\nLower bound of 13: "<<*(s.lower_bound(13));
    cout<<"\nUpper bound of 13: "<<*(s.upper_bound(13));
  
    //upper_bound-->(Greater than key)
    //Return the address of the element just as given if  found else the element just smaller to it

    cout<<"\n\nlower bound of 9: "<<*(s.lower_bound(9));
    cout<<"\nUpper bound of 9: "<<*(s.upper_bound(9));
    return 0;
}

//multiset<int>s;
//Used to accesseven duplicate elements;
//unordered_set<int> s;
//Random order: TC=O(1)