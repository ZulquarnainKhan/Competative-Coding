#include<bits/stdc++.h>
using namespace std;

void printSet(auto &s){
    for(string value : s){
        cout<<value<<endl;
    }
}

int main(){
    // As multiset stores data in arranged ordered manner and can store multiple data of same elements also
    // In multiset we can add duplicate elements, We can enter same element multiple types
    // We can use multisets instead of priority queue 
     
    multiset<string> s;
    s.insert("abc");     // O(log(n)) time complexity for inserting elements in multiset
    s.insert("zsdf");
    s.insert("bcd");
    s.insert("abc");     // In multiset we can add duplicate elements

    printSet(s);

    auto it = s.find("abc");   // O(log(n)) Here duplicate of string "abc" are present so find function returns the first string "abc"
    if(it != s.end()){
        s.erase(it);        // O(1) This will erase the element at which the iterator is pointing, here 'it' is pointing at first "abc"
    }  

    // We must not delete using this methord in multiset
    // s.erase("abc");       // O(log(n)) This will erase all the strings "abc" from the multiset 

    printSet(s);

}