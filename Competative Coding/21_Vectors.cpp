#include<bits/stdc++.h>
using namespace std;

template <class T>
void printVec(vector<T> &v){        // O(n) ->Here we are taking the vector as reference not its copy as copying vector has timecomplexity O(n).
    for(int i=0;i<v.size();i++){    // O(1) ->v.size()  time complexity is O(1)
        cout<<v[i]<<" ";    
    }
    cout<<endl;
}

int main(){
    vector<int> v1;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v1.push_back(x);       // O(1)  timecomplexity for push_back function
    }

    printVec(v1);

    vector<int> &v2 = v1;      // Here we are taking the vector v2 as reference so any change in v2 will change v1 
    //vector<int> v3 = v1;     // O(n) ->Here we are taking the vector v3 as copy so elements are copied one by one  
    v2.pop_back();             // O(1) timecomplexity

    vector<string> vec1;
    int s;
    cin>>s;
    for(int i=0;i<s;i++){
        string str;
        vec1.push_back(str);
    }

    printVec(vec1);
}