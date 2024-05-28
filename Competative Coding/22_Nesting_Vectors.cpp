#include<bits/stdc++.h>
using namespace std;

void printVec(vector<pair<int,int>> &v){           // printing vector pairs
    for(int i=0;i<v.size();i++){    
        cout<<v[i].first<<" "<<v[i].second<<endl;    
    }
    cout<<endl;
}
void printVec(vector<int> &v){           // printing vector
    for(int i=0;i<v.size();i++){    
        cout<<v[i]<<" ";    
    }
    cout<<endl;
}

int main(){
// --------------------- Vector Pairs -----------------------------    
    vector<pair<int,int>> v1 = {{1,2} , {2,3} , {4,5} , {5,6}};  
    printVec(v1);

// How to take input in vector pair
    vector<pair<int,int>> v2;
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        v2.push_back({x,y});
    }
    printVec(v2);

// ------------------ Array of vectors -------------------------------
// In array of arrays we have fixed no of columns and rows
// But in Array of vectors we have fixed columns but variable rows 

    //vector<int> v3[5];   // This means we have 5 vectors of 0 size each

    int N;
    cin>>N;
    vector<int> v3[N];      // N no of vectors
    for(int i=0;i<N;i++){
        int n1;             // n1 is the no of elements in the v3[i] vector   
        cin>>n1;
        for(int j=0;j<n1;j++){
            int x1;
            cin>>x1;
            v3[i].push_back(x1);
        }
    }

    for(int i = 0;i<N;i++){      // Printing array of vectors
        printVec(v3[i]);
    }

    cout<<v3[0][0]<<endl;     // prints 1st vector's first element   

// ----------------------- Vector of Vectors ---------------------------------- 
// In vector of vector we have variable no of columns as well as rows

    vector<vector<int>> v4;
    int N;
    cin>>N;
              // declaring a temporary vector
    for(int i=0;i<N;i++){
        int n;cin>>n;
        vector<int> temp;
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            temp.push_back(x);
        }
        v4.push_back(temp);
    }

    for(int i = 0;i<v4.size();i++){      // Printing vector of vectors
        printVec(v4[i]);
    }
    

}
