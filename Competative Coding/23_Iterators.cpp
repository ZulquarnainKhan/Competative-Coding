#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {2,3,5,6,7};
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    vector<int> :: iterator it = v.begin();
    cout<<*(it)<<" ";             // Printed just like a pointer using *   And it prints element where iterator is pointing here begin()
    //cout<<*(it+1)<<" ";          
    cout<<*(it+1)<<endl;          // Here 2nd element get printed as it+1 is done just like in pointers

// v.begin() points first element and v.end() points next element of last element i.e v.end() points outside the vector
    for(it = v.begin();it != v.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;    

// it++ -> next iterator    // This works everywhere in case of maps, vectors, sets and lists
// it+1 -> next location    // This doesnot works in case of maps and sets but works inn vectors and lists

vector<pair<int,int>> v_p = {{1,2},{2,3},{3,4}};
vector<pair<int,int>> :: iterator itp;
for(itp = v_p.begin();itp != v_p.end();itp++){
    //cout<<(*itp).first<<" "<<(*itp).second<<endl;
    cout<<itp->first<<" "<<itp->second<<endl;   // can also be done by arrow operator
}

}