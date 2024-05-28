/*
Given N strings and Q queries.
In each query you are given a string
print "YES" if the string is present else print "NO" 

Constraints:
N <= 10^6
|S| <= 100
Q <= 10^6

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_set<string> s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string str;
        cin>>str;
        s.insert(str);    // O(1)
    }

    int q;
    cin>>q;
    while(q--){
        string str1;
        cin>>str1;
        auto it = s.find(str1);    // O(1)
        if(it != s.end()){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

}