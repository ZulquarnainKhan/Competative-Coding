#include<bits/stdc++.h>
using namespace std;
unordered_map<char,int> symbols = {{'[',-1},{'(',-2},{'{',-3},{']',1},{')',2},{'}',3}};  // Here we have declared unordered_map globally

void isBalanced(string s){
    stack<char> st;
    int flag=0;
    for(char bracket : s){
        if(symbols[bracket] < 0){
            st.push(bracket);
        }
        else{
            if(st.empty()){
                cout<<"NO"<<endl;
                flag=1;
                break;
            }
            else if(symbols[st.top()] + symbols[bracket] != 0){
                cout<<"NO"<<endl;
                flag=1;
                break;
            }
            else{
                st.pop();
            }
        }
    }
    if(flag==0 && st.empty()){
        cout<<"YES"<<endl;
    }

}

int main(){
    int t;
    cin>>t;
    while(t--){
        string s ;
        cin>>s;
        isBalanced(s);
        cout<<endl;
    }


}