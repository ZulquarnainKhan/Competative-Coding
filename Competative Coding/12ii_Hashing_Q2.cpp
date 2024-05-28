/*
Given array a of N integers, Given Q queries
and in each query given a number X, 
print count of that number in array.

Constraints:
1 <= N <= 10^5
1 <= a[i] <= 10^7
1 <= Q <= 10^5

*/

//----------------- Hashing --------------------------------
// Here we are doing hashing as a[i] < 10^7 otherwise we mustnot use hashing
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
int hsh[N];    //Global arrays are zero initialised


int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        hsh[a[i]]++;
    }
    int q;
    cin>>q;
    while(q--){
        int x,count=0;
        cin>>x;
        cout<<hsh[x]<<endl;


        // for(int i=0;i<n;i++){
        //     if(x == a[i]){
        //         count++;
        //     }
        //     cout<<count<<endl;
        // }

    // O(N) + O(q*N) = O(q*N) = 10^10   Time complexity is more
    
    }
}

