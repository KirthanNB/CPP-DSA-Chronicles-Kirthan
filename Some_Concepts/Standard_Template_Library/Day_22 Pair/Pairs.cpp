#include<iostream>
//Noting is needed to include to use pair
#include<vector>
#include<string>
using namespace std;
int main(){
    //Initiasilsation and Declaration
    //Syntax:
    //pair<data_type, data_type> pair_name;
    pair<int, int> p={1, 5};
    //Accessing pairs
    cout<<"First element of pair: "<<p.first<<"\nSecond element of pair: "<<p.second<<endl;

    //Creating pair of pair
    pair<int, pair<int, int>> pa={1, {5, 12}};
    //Accessing pair of pair
    cout<<"\nFirst element of pair: "<<pa.first<<"\nSecond first element of pair of pair: "<<pa.second.first<<"\nSecond Second element of pair of pair: "<<pa.second.second<<endl;;
    
    //Creating vectors of pair
    vector<pair<int, int>> vepa={{1, 3}, {2, 4}, {3, 5}, {4, 6}};
    //Accessing vectors of pair
    for(auto val: vepa){
        cout<<val.first<<"  "<<val.second<<endl;
    }
    //Understanding push_back and emplace_back
    vepa.push_back({5, 7});
    //In case of push_back we need to format the arguments in {}
    vepa.emplace_back(6, 8); //Inplace object is created
    //In case of emplace_back no need of formating
    //emplace_back is more efficient than push_back
    cout<<endl<<"Accessing elements of vector pair after emplace back and ppush back.."<<endl;
    for(auto val: vepa){
        cout<<val.first<<"  "<<val.second<<endl;
    }
    //pairs of different data types can also be created

    pair<int, string> pic= {6, "Google"};
    cout<<endl<<"Accessing elements of pair with different data_types.\n";
    cout<<"First element of pair: "<<pic.first<<"\nSecond element of pair: "<<pic.second;

}