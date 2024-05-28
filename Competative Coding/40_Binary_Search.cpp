#include<bits/stdc++.h>
using namespace std;

// Binary search works on monotonic function     // O(logn)
// Monotonic Function:
// Function which maintains a given order
// 1 2 3 4 5 6      // --> Monotonic Function
// 6 5 4 3          // --> Monotonic Function
// 1 3 5 6 7        // --> Monotonic Function
// 1 2 6 5 4        // --> Non-Monotonic Function (First increasing then decreasing)
// 7 4 3 2 1        // --> Monotonic Function
// F F F F T T T    // --> Pradicate(returns bool) monotonic Function
// T T T T F F F F F F      // --> Pradicate(returns bool) monotonic Function

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int to_find;
    cin>>to_find;
    int low = 0 , high = n-1;
    int mid ;
    while(high - low > 1){    // Always use this condition
        mid = (high + low)/2;
        if(v[mid] < to_find){
            low = mid+1;
        }
        else{
            high = mid;
        } 
    }
    if(v[low]==to_find){
        cout<<low<<endl;
    }
    else if(v[high]==to_find){
        cout<<high<<endl;
    }
    else{
        cout<<"Element Not Found"<<endl;
    }
        
    



}