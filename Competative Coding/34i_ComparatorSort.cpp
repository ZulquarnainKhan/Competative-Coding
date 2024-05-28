#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> a, pair<int,int> b){
    if(a.first != b.first){
        return a.first > b.first;       // If we want to sort v[].first in descending order then we return a.first > b.first
    }
    else if(a.first == b.first){
        return a.second < b.second;     // If we want to sort v[].second in ascending order then we return a.second < b.second
    }
}

int main(){
    int n;
    cin>>n;
    vector<pair<int,int>> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].first>>v[i].second;
    }

    sort(v.begin(),v.end(),cmp);

    for(int i=0;i<n;i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    
}