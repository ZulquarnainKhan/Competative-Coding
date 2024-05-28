/*
Given 2D array a of n*n integers, Given Q queries
and in eaxh query given a,b,c and d print sum of
square represnted by (a,b) as top left point and (c,d)
as top bottom right point.

Constraints:
1 <= N <= 10^3
1 <= a[i][j] <= 10^3
1 <= q <= 10^5
1 <= a,b,c,d <= N

*/
#include<bits/stdc++.h>
using namespace std;
const int N=1e3+10;
int arr[N][N];
int pf[N][N];

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){      // We must start the indexing from 1 as required in prefixSum methord
        for(int j=1;j<=n;j++){
            cin>>arr[i][j];
            pf[i][j] = pf[i][j-1] + pf[i-1][j] + arr[i][j] - pf[i-1][j-1];
        }
    }
    int q;
    cin>>q;
    while(q--){
        int a,b,c,d;
        int sum=0;
        cin>>a>>b>>c>>d;
        cout<<pf[c][d] - pf[a-1][d] - pf[c][b-1] + pf[a-1][b-1]<<endl;     // O(n*n) + O(q) = O(n*n) = 10^6   Which is less than 10^7

        // for(int i=a;i<=c;i++){
        //     for(int j=b;j<=d;j++){
        //         sum+=arr[i][j];
        //     }
        // }

    // Time Complexity: O(n) + O(q*n*n) = O(q*n*n) = 10^11   Which is greater than 10^7
    }


}