#include<bits/stdc++.h>
using namespace std;

void printMap(auto &m){           // Accessing an element in map is O(log(n))
    cout<<m.size()<<endl;
    for(auto &val : m){           // O(nlog(n)) is the timecomplexity for printing the elements of the map 
        cout<<val.first<<" "<<val.second<<endl;
    }
}

int main(){
    // in unordered map we cannot give complex dataTypes such as pair
    unordered_map<int,string> m;       // In unordered_maps store value in unsorted order using hashes
    m[1] = "abc";         // O(1) time complexity for insertion in unordered_map
    m[5] = "cdc";
    m[3] = "acd";
    m[5] = "cde";      

    m.insert({4,"ag"});   


    auto it = m.find(3);    // m.find(key)  returns an iterator pointing towards the key
    // find(key) timecomplexity is O(1) in unordered_map


    // if(it == m.end()){
    //     cout<<"No value as key is not present "<<endl;
    // }
    // else{
    //     cout<<it->first<<" "<<it->second<<endl;
    // }

    // auto it1 = m.find(3);
    // if(it1 != m.end()){         // Checks wheter the key is present or not if present then erase 
    //     m.erase(3);    // O(log(n))   And it deletes an element from map along with its key
    // }
    printMap(m);
}