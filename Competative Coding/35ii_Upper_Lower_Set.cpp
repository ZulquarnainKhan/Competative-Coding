#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    set<int> s;
    for(int i=0;i<n;i++){
        int e;
        cin>>e;
        s.insert(e);
    } 

    auto it = s.lower_bound(5);     // O(log(n)) time complexity and we must use lower_bound this way
    //auto it = lower_bound(s.begin(),s.end(),5);  // We mustnot use this methord as it has O(n) and gives TLE

    auto it = s.upper_bound(5);     // O(log(n)) time complexity and we must use upper_bound this way
    //auto it = lower_bound(s.begin(),s.end(),5);  // We mustnot use this methord as it has O(n) and gives TLE
    
}