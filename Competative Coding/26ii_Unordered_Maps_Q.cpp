/*
Given N strings and Q queries. In each Query you are givena string print frequency of the string

Constraints:
N <= 10^6
|S| <= 100
Q <= 10^6
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<string,int> m;     // Here we have used unordered_map instes=ad of map because using map would have gave us TLE error
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        m[s] = m[s] + 1;     // m[s] where value is int always and automatically starts with 0 
                             // If the already entered string appears then m[s] values get + 1  And this will give us the frequency of element
    }    

    int q;
    cin>>q;
    while(q--){
        string s;
        cin>>s;
        cout<<m[s]<<endl;   // O(q*1) in case of unordered_map 
    // But if we have used map then time complexity would have been O(q*log(n)) = 10^6 * log(10^6) which must be grater than 10^7
    }

}