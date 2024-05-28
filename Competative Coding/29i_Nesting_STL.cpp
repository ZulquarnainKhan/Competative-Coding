#include<bits/stdc++.h>
using namespace std;

int main(){
    map<pair<string,string>,vector<int>> m;
    int t;
    cin>>t;
    while(t--){
        string fn,ln;
        int n;
        cin>>fn>>ln>>n;
        for(int i=0;i<n;i++){
            int val;
            m[{fn,ln}].push_back(val);      // m[{fn,ln}]  acts as a vector and all operation of vector are valid in it.
        }
        
        for(auto it = m.begin();it != m.end();it++){
            auto &fullname = it->first;
            auto &arr = it->second;         // Here we are using &arr as we donot want to copy the vector and want the actual vector
                                            // Copying a vector will take O(n) timecomplexity while derefernecing it takes O(1)   

            cout<<fullname.first<<" "<<fullname.second<<endl;
            cout<<arr.size()<<endl;
            for(auto it1 = arr.begin();it1 != arr.end() ; it1++){
                cout<<(*it1)<<" ";
            }
            cout<<endl;
        }
    }

    // map<pair<int,int>,int> m;
    // pair<int,int> p1,p2;
    // p1 = {2,2};
    // p2 = {2,3};
    // cout<<(p1<p2)<<endl;      // It is considered true as p1.first < p2.first 
    //                           // If p1.first==p2.first, then comparision takes place in p1.second < p2.second  
    // // Here in maps data is stored in ordered manner of keys thus the data is stored in areranged manner of pair<int,int> as discussed above.

    // map<set<int>,int> m;
    // set<int> s1 = {1,2,3};
    // set<int> s2 = {2,3};
    // cout<<(s1 < s2)<<endl;      // It is considered true as first lement of s2 is greater than s1

    // map<vector<int>,int> m;
    // vector<int> v1 = {1,2,3};
    // vector<int> v2 = {1,2,4};
    // cout<<(v1 < v2)<<endl;


}
