#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {2,3,5,6,7};
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    } 
    cout<<endl;

    vector<int> :: iterator it;
    for(it = v.begin();it != v.end();it++){
        cout<<(*it)<<" ";
    }
    cout<<endl;

    // for(int value : v){      // This is known as range based loop
    //                          // We get a copy of elements of vector v in value and elements cannot be changed in actual vector       
    //     cout<<value<<" ";
    // }
    // cout<<endl;

    // for(int &value : v){      // As refernse is used the actual elements of vector v comes and can be changed 
    //     value++;                
    // }
    // cout<<endl;

    for(int &value : v){      // This is known as range based loop        
        cout<<value<<" ";
    }
    cout<<endl;


    vector<pair<int,int>> v_p = {{1,2},{2,3}};
    for(pair<int,int> value : v_p){
        cout<<value.first<<" "<<value.second<<endl;
    }
    cout<<endl;

// ------------------ auto ------------------------
    auto a = 1;
    cout<<a<<endl;  

    vector<int> v = {2,3,5,6,7};
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    } 
    cout<<endl;

    //vector<int> :: iterator it;       // auto operator itself assumes that the variable is a iterator pointing in vector<int>
    for(auto it = v.begin();it != v.end();it++){
        cout<<(*it)<<" ";
    }
    cout<<endl;

    for(int &value : v){      // This is known as range based loop        
        cout<<value<<" ";
    }
    cout<<endl;


    vector<pair<int,int>> v_p = {{1,2},{2,3}};
    //for(pair<int,int> value : v_p){
    for(auto value : v_p){                     // We can also use auto operator here instead of pair<int,int>
        cout<<value.first<<" "<<value.second<<endl;
    }
    cout<<endl;

}