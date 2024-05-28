#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
// ----------------------------- min_element() -----------------------------------    
    int min = *min_element(v.begin(),v.end());   // O(n)  min_element returns a iterator/pointer pointing to minimum element from index '0 to end-1'
    //int min = *(min_element(v.begin()+3,v.end()));   // O(n)  minimum element in vector from index '3 to end-1' 
    cout<<min<<endl;

// ----------------------------- max_element() -----------------------------------    
    int max = *max_element(v.begin(),v.end());   // O(n)  max_element returns a iterator/pointer pointing to maximum element in vector  
    //int max = *(max_element(v.begin(),v.end()-2));   // O(n)  maximum element in vector from index '0 to end-3' 
    cout<<max<<endl;

// ----------------------------- accumulate() -----------------------------------    
    int sum = accumulate(v.begin() , v.end(), 0 );   // O(n)  sum of elements of vector from index '0 to end-1' + '0'
    //int sum = accumulate(v.begin()+2 , v.end()-1, 5 );   // O(n)  sum of elements of vector from index '2 to end-2' + '5'
    cout<<sum<<endl;

// ----------------------------- count() -----------------------------------------        
    int ct = count(v.begin(),v.end(),5);     // O(n)  returns the number of times 5 is present in the vector from index '0 to end-1'
    //int ct = count(v.begin()+1,v.end(),5);     // O(n)  returns the number of times 5 is present in the vector from index '1 to end-1'
    cout<<ct<<endl;

// ----------------------------- find() --------------------------------------        
    auto it = find(v.begin(),v.end(),2);     // O(n)
    if(it != v.end()){
        cout<<*it<<endl; 
    }
    else{
        cout<<"Not Found"<<endl;
    }

// ----------------------------- reverse() -----------------------------------    
    reverse(v.begin(),v.end());     // O(n) Reverses an vector from index '0 to end-1'
    reverse(v.begin()+1,v.end()-2);     // Reverses an vector from index '1 to end-3'

}   