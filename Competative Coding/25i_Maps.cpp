#include<bits/stdc++.h>
using namespace std;

void printMap(auto &m){           // Accessing an element in map is O(log(n))
    cout<<m.size()<<endl;
    for(auto &val : m){           // O(nlog(n)) is the timecomplexity forprinting the elements of the map 
        cout<<val.first<<" "<<val.second<<endl;
    }
}

int main(){
    map<int,string> m;       // maps store value in sorted order of the keys 
    m[1] = "abc";         // O(log(n)) timecomplexity for insertion
    m[5] = "cdc";
    m[3] = "acd";
    m[5] = "cde";      // In map every key must bee unique thus when entered key 5 , map changes the string from "cdc" to "cde"

    m.insert({4,"ag"});   // We can aslo insert using insert({key,value}) function  BUT DONOT PREFER IT

    // map<int,string> :: iterator it;                 // We can also print using this methord but it is lengthy
    // for(it = m.begin();it != m.end();it++){
    //     cout<<it->first<<" "<<it->second<<endl;
    // }
    // cout<<endl;

    // for(auto &value : m){                 // We can directly print maps we donot need iterators here
    //     cout<<value.first<<" "<<value.second<<endl;
    // } 

    auto it = m.find(3);    // m.find(key)  returns an iterator pointing towards the key
    // find(key) timecomplexity is O(log(n))
    if(it == m.end()){
        cout<<"No value as key is not present "<<endl;
    }
    else{
        cout<<it->first<<" "<<it->second<<endl;
    }

    auto it1 = m.find(3);
    if(it1 != m.end()){         // Checks wheter the key is present or not if present then erase 
        m.erase(3);    // O(log(n))   And it deletes an element from map along with its key
    }
    printMap(m);
}