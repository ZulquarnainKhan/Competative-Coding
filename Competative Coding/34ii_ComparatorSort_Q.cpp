#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> a,pair<int,int> b){
    if(a.second != b.second){
        return a.second > b.second;
    }
    else if(a.second == b.second){
        return a.first < b.first;
    }
}

int main(){
    int n;
    cin>>n;
    vector<string,int> v(n);
    for(int i=0;i<n;i++){
        string s;
        int marks;
        cin>>s>>marks;
        v[i].first=s;
        v[i].second=marks;
    }

    sort(v.begin(),v.end(),cmp);

    for(int i=0;i<n;i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }

}