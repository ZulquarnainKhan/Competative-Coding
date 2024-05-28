// Hacker Earth: Monk and the magical Candy Bag

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;

// We are using multiset as we require automatic sorting as well as many bags can have same no of candies

        multiset<long long int> s;    // Used long long int as a[i] <= 10^10
        for(int i=0;i<n;i++){
            long long int c;
            cin>>c;
            s.insert(c);
        }
        long long int count = 0;
        
        for(int i=0;i<k;i++){
            auto it = s.end();it--;   
            count += *it;
            long long int n = *it/2;
            s.erase(it);        // O(1)
            s.insert(n);        // O(log(n))
        }

        cout<<count<<endl;

    }
}