#include<bits/stdc++.h>
using namespace std;

void printSet(set<string> &s){
    // for(auto it=s.begin();it != s.end();it++){         // Can be done by using iterators
    //     cout<<(*it)<<endl; 
    // }

    for(string value : s){
        cout<<value<<endl;
    }

}

// Set stores data in ordered manner
// Set stores unique data , they donot store copies, copies are stored by multiset

int main(){
    set<string> s;
    s.insert("abc");      // O(log(n))  time complexity for insertion in an set as it follows red black trees
    s.insert("zsdf");
    s.insert("bcd");
    s.insert("abc");      // Set stores unique elements just like map and thus this time abc will not get inserted

    printSet(s);
    cout<<endl;

    auto it1 = s.find("abc");     // O(log(n)) time complexity for finding an element in a set 
// If the element not found then we get s.end() in iterator it1 and doing any operation on s.end() will give us segmentation error
    if(it1 != s.end()){           
        //cout<<(*it1)<<endl; 
        s.erase(it1);        // O(log(n))  This will erase the element or the iterator pointing towards the element from the set
    }
    s.erase("bcd");          // O(log(n))

    printSet(s);

}