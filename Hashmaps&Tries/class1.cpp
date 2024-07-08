#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    // creation
    unordered_map<string, int> mapping;

    // insertion
    pair<string, int> p = make_pair("love", 25);

    pair<string, int> q("dipansh", 24);

    pair<string, int> r;
    r.first = "Arun";
    r.second = 21;

    mapping.insert(p);
    mapping.insert(q);
    mapping.insert(r);
    // insert
    mapping["babber"] = 51;

    cout<<"Size of map: "<<mapping.size()<<endl;

    // Access
    cout<<mapping.at("love")<<endl;
    cout<<mapping["love"]<<endl;

    // searching
    cout<<mapping.count("love")<<endl;

    if(mapping.find("babber") != mapping.end() ){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }

    cout<<"size of map: "<<mapping.size()<<endl;
    cout<<mapping["Kumar"]<<endl;
    cout<<"size of map: "<<mapping.size()<<endl;

    
    return 0;
}