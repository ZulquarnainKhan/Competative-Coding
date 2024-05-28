#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> allsubsets;

void generate(vector<int> &subset,int i,vector<int> &num){    // Here we pass dereference of subset otherwise copying takes O(n) time complexity
    if(i == num.size()){
        allsubsets.push_back(subset);
        return;
    }
    
    generate(subset,i+1,num);

    subset.push_back(num[i]);
    generate(subset,i+1,num);
    subset.pop_back();    


}


int main(){
    int n;
    cin>>n;
    vector<int> num;
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    vector<int> empty;
    generate(empty , 0 , num);
    for(auto subset : allsubsets){     // Here subset and allsets are vector<>   NOT set<>
        for(auto ele : subset){
            cout<<ele<<" ";
        }
    }

}