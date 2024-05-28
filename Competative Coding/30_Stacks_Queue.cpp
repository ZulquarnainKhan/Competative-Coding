#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int> st;     // LIFO Data Structure
    st.push(4);
    st.push(3);
    st.push(4);
    st.push(5);
    while(!st.empty()){
        cout<<st.top()<<endl;    // st.top() prints the last entered element
        st.pop();                // In stack pop() removes element from last
    }
    cout<<endl;

    queue<string> q;     // FIFO Data Structure
    q.push("abc");
    q.push("bcd");
    q.push("cde");
    q.push("def");
    q.push("efg");

    while(!q.empty()){
        cout<<q.front()<<endl;     // q.front() prints element entered first
        q.pop();                   // In queue pop() removes element from first
    }

    return 0;
}