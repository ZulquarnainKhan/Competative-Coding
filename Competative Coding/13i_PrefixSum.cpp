/*
Given array a of N integers, Given Q queries and in each query given
L and R , Print sum of array from Index L to R (L and R included)

Constraints:
1 <= N <= 10^5
1 <= a[i] <= 10^9
1 <= Q <= 10^5
1 <= L,R <= N

*/

#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
int a[N];
int pf[N];

int main(){
    int n;
    cin>>n;
    
    for(int i=1;i<=n;i++){     // When we are preComputing we must always start the index of an array from 1
        cin>>a[i];
        pf[i] = pf[i-1] + a[i];
    }
    int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        cout<<pf[r]-pf[l-1]<<endl;     // O(n) + O(q) = 10^5

    //    long long sum=0;       // It is taken long long as a[i] is 10^9    
    //     for(int i=l;i<=r;i++){
    //         sum+=a[i];
    //     }
    //     cout<<sum<<endl;
    // // Time Complexity: O(n) + O(q*n) = O(q*n) = 10^10      Which is greater than 10^7
    
    
    }

}