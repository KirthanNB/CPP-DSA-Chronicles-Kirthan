#include<iostream>
#include<map>
using namespace std;
int main(){
    //Initialisation and Declaration
    map<int, string> m;
    // m[key]=value;
    // insert
    // emplace
    // count
    // erase
    // find
    // size
    // empty

    //Keys in map are unique to every values;
    //Values may not be unique but keys are always unique

    m[6]="Chethan_K";
    m[2]="Dhanraj_N_S";
    m[5]="Shreyas_Patil";
    m[1]="Kirthan_N_B";
    m[3]="Rohith_M";
    m[4]="Narasimha_Murthy";
    
    //Inserting values;
    m.insert({7, "Monika_N_S"});
    m.emplace(8, "Chaithanya_N_B");
    //Accessing values

    //Also note that the values in output is sorted by itself based on lexographical order of Keys
    cout<<"ID: Names\n";
    for(auto p: m){
        cout<<p.first<<": "<<p.second<<endl;
    }

    
    return 0;
}

//Upcoming Session


//Multi Maps
//Initialisation: multimap<int, string> m;
//[] notation cant be used to accessed
//Multiple values with same key is possible
//Used insert, erase

//Unordered Map
//Initialisation: unordered_map<int, string> m;
//Unordered while output
