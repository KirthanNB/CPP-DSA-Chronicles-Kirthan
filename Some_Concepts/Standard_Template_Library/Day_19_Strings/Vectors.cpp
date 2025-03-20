#include<iostream>
#include<vector> //Including vector Library is needed
using namespace std;

int main(){
    //Some Declaration types

    //Syntax: vector<data_type> name;

    vector<int> vec; //Only initialisation
    vector<int> ve(8, 10); //Initialisation and Declaration, here first parameter is size of vector, and second parameter is value stored at all indices
    vector<int> v(ve); //Initialisation and declaration by copying all the values of ve into new vector
    
    //Exploring some functions of vector library

    cout<<endl<<"Initial Size of vector: "<<ve.size();
    ve.push_back(20);           //Pushing back a new element into vector
    cout<<endl<<"New value pushed into vector: ";
    for(int val: ve){  //Loop used to access all the values of vector
        cout<<" "<<val;
    }
    cout<<endl<<"Size of vector after Pushback: "<<ve.size();
    ve.pop_back(); //Deleting the last element pushed into vector
    ve.pop_back();
    cout<<endl<<"New size after using pop back function twice: "<<ve.size();
    ve.emplace_back(15);    //Pushing back the new element into vector using similar function emplace back;
    cout<<endl<<"Size of function after using emplace back: "<<ve.size();
    cout<<endl;
    for(int val: ve){
        cout<<" "<<val;
    }

    //Methonds to access a indices of a vector;

    cout<<endl<<endl<<"Accessing indice 5: "<<ve[5]<<" also from another method of at: "<<ve.at(5)<<endl;
    //Accessing first element of vector
    cout<<ve.front()<<" is the first element..."<<endl;
    cout<<ve.back()<<" is the last element..."<<endl;

    // Capacity

    cout<<endl<<"One can also access the capacity of vector: ";
    cout<<endl<<"Note that size and capacity are different function:"<<endl;
    cout<<"Capacity of our vector is: "<<ve.capacity()<<endl;  //Capacity is doubeled the size when required
    //Some more functions

    cout<<endl<<"Erasing the vector from indice 0 to 2: "<<endl<<endl;
    ve.erase(ve.begin(), ve.begin()+3); //Erase take two arguments, first is from which indice to delete and second is till which indice;
    //Note that the indice at second argument is excluded;
    
    //Make sure to use **begin()** iterators to have no errors
    //This also implies to insert function

    for(int val: ve){
        cout<<" "<<val;
    }

    cout<<endl<<endl<<"Inserting the values in specific position: "<<endl;
    ve.insert(ve.begin()+1, 100); //inserting number 100 at indice 1
    for(int val: ve){
        cout<<" "<<val;
    }

    //Cleaing all the elements of the vector we use clear function

    ve.clear();
    cout<<endl<<endl<<"Size of vector after clearing all the elemnts: "<<ve.size()<<endl;

    //Checking if the vector is empty or not

    cout<<"Is the vector empty: "<<ve.empty()<<endl<<endl;

    return 0;

}