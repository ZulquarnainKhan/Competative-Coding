// Codechef Question 
// GCD Queries : Rating 1674

#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        int arr[n+10];
        int forward[n+10];
        int backward[n+10];
        forward[0] = backward[n+1] = 0;
        for(int i=1;i<=n;i++){
            cin>>arr[i];
        }
        for(int i=n;i>=1;i--){
            backward[i] = __gcd(arr[i],backward[i+1]);    // Time complexity of __gcd is  O(log(n))
        }
        for(int i=1;i<=n;i++){
            forward[i] = __gcd(arr[i],forward[i+1]);
        }
        

        while(q--){
            int l,r;
            cin>>l>>r;
            cout<<__gcd(backward[r+1],forward[l-1])<<endl;

            // int g=0;   // GCD of any number with 0 is the number itself
            // for(int i=1;i<=l-1;i++){
            //     g = __gcd(arr[i],g);     // gcd is written ad __gcd   (double underscore gcd)
            // }
            // for(int i=r+1;i<=n;i++){
            //     g = __gcd(arr[i],g);
            // }
            // cout<<g<<endl;

        // Time Complexity: O(t*n + t*q*(n+n)) = O(t*q*n) = 10^15  which is way larger than 10^7       
        }
    }

}
