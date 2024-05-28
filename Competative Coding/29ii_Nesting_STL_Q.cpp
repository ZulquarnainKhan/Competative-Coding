#include<bits/stdc++.h>
using namespace std;

int main(){                           
    map<int,multiset<string>> m;      // We must always use Multiset, when not mentioned whether names are unique or not.
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int marks;
        string name;
        cin>>name>>marks;
        m[marks].insert(name);
    }

    auto it = m.end();it--;
    while(true){
        auto &students = it->second;
        auto &marks = it->first;
        
        for(auto it1 = students.begin();it1 != students.end();it1++){
            cout<<(*it1)<<" "<<marks<<endl;
        }
        if(it == m.begin()){
            break;
        }
    }


}