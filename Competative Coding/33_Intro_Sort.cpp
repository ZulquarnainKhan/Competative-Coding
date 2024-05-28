#include<bits/stdc++.h>
using namespace std;

// sorting algorithm uses Intro Sort  O(nlog(n))

int main(){
    int n;
    cin>>n;
    int a[n];                     // Sorting in case of arrays
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //sort(a,a+n);   // In sort function we give address of first element and address of after last element
                   // array is itself a pointer thus a is address of a[0] and a+n is the address of a[n]

    sort(a,a+n);    // This will sort array from a[0] to a[n-1]
    // sort(a+2,a+n);  // This will sort array from a[2] to a[n-1]
    // sort(a,a+n-1);  // This will sort array from a[0] to a[n-2]

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}