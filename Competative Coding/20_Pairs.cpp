#include<bits/stdc++.h>
using namespace std;


int main(){
    pair<int,string> p;
    p = {2,"abcd"};        // This is the way to enter data in pair
    pair<int,string> &p1 = p;     // Here we are taking p1 as address reference thus any value change in p1 also changes p
    // pair<int,string> p1=p;     // Here only the copy of p is taken by p1 and any change in p1 has no effect on p      
    
    cout<<p1.first<<" "<<p1.second<<endl;      // This is the way to access the first and second pair elements                      

// If in the question it is mentioned the the arrays a and b are related to each other then we make pairs
// And any operation in array a then the same operation with the corresponding element must also be done for array b. 
    int a[] = {1,2,3};
    int b[] = {2,3,4};
    pair<int,int> p_array[3];    // p_array is the pair of array a and b
    p_array[0]={1,2};
    p_array[1]={2,3};
    p_array[2]={3,4};
    
    swap(p_array[0],p_array[2]);
    for(int i=0;i<3;i++){
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }

}