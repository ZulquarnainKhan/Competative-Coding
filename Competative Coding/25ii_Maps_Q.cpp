/*
Given N strings , print unique strings in lexiographical order with their frequency 
N <= 10^5
|S| <= 100
*/

#include<bits/stdc++.h.>
using namespace std;

int main(){
    map<string,int> m;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        m[s] = m[s] + 1;    // m[s] where value is int always and automatically starts with 0 
                            // If the already entered string appears then m[s] values get + 1  And this will give us the frequency of element
    } 
    for(auto pr : m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}