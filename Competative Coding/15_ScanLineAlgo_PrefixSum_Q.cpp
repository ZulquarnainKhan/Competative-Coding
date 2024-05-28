#include<bits/stdc++.h>
using namespace std;
const int N = 1e7+10;
long long int arr[N];   // Here we have declared a global array as the constraints are equal or greater than 10^7 
                        // Long long is given as value input can be 10^9
long long int pf[N];

int main(){
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }

    while(m--){
        int a,b,k;
        cin>>a>>b>>k;
        arr[a] += k; 
        arr[b+1] -= k; 


        // for(int i=a;i<=b;i++){
        //     arr[i] += k;
        // }
    }
    for(int i=1;i<=n;i++){      
        pf[i] = pf[i-1] + arr[i];       // Time Complexity: O(n) + O(m) + O(n) + O(n) ~ O(n) ~ 10^7 
    }

    
    // Here we are writing the rest code outside the while loop as it is not required to write inside the loop
    long long max = pf[1];     // long long as entered elements are 10^9
    for(int i=1;i<=n;i++){
        if(max<pf[i]){
            max = pf[i];
        }
    }
    cout<<max<<endl;

    // Time Complexity: O(n) + O(m*n) + O(n) = O(m*n) = 2*10^5 * 10^7 = 10^12   Which is larger than 10^7  Thus will give TLE
}