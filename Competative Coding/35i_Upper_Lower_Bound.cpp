#include<bits/stdc++.h>
using namespace std;

// Lower and Upper bound for sets and maps has O(n) time complexity
// Lower and Upper bound for sorted vectors has O(logn) time complexity

// Lower Bound:
// It will return the iterator/pointer of the element present in the vector
// if not present it will return element greater than entered element present in the vector/array 

// Upper Bound:
// It will always return the iterator/pointer of element greater than the enetered element in the vector/array.

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    sort(v.begin(),v.end());   // If the vector is not sorted then it will take O(n) time complexity to find upper and lower bound

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

// -------------------------------- LOWER BOUND ---------------------------------

    auto it = lower_bound(v.begin(),v.end(),5);    // Here we are finding the lower bound of 5 from index 0 to end-1
    // auto it = lower_bound(v.begin()+2,v.end(),5);    // Here we are finding the lower bound of 5 from index 2 to end-1
    // auto it = lower_bound(v.begin()+1,v.end()-2,5);    // Here we are finding the lower bound of 5 from index 1 to end-3
    
    if(it != v.end()){
        cout<<(*it)<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }

// -------------------------------- UPPER BOUND ----------------------------------

    auto it = upper_bound(v.begin(),v.end(),5);    // Here we are finding the upper bound of 5 from index 0 to end-1
    // auto it = upper_bound(v.begin()+2,v.end(),5);    // Here we are finding the upper bound of 5 from index 2 to end-1
    // auto it = upper_bound(v.begin()+1,v.end()-2,5);    // Here we are finding the upper bound of 5 from index 1 to end-3
    
    if(it != v.end()){
        cout<<(*it)<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }


}