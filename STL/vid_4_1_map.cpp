#include<iostream>
#include<map>
using namespace std ;
// uses red black trees internally
// ordered map sort automatically according to key values
// unordered map do not sort
// non continuos memory allocation it++ shoould be used not it+1 (for iterators)

void print(map<int , string> m)
{
    cout<<"size : "<<m.size() <<endl ;
    //range and auto
    for(auto it : m)
    cout<<it.first<<" "<<it.second <<endl ;
    //normal
    map<int , string> :: iterator it ;
    for(it = m.begin();it != m.end();it++)
    cout<<it->first<<" "<<it->second<<endl ;// to access one element O(log(n))
}
int main()
{
    map<int , string> m ;
    //1. way to give elements in to map
    m[1] = "abc" ;// O(log(n)) to insert elements in map even only index also takes O(log(n)) 
    m[5] = "ghi" ;
    m[4] = "bnf" ;
    m[4] = "four" ; //replaces the existing key , unique key for every pair
    m[90] = "ninty" ;
    //2. by using insert function
    m.insert({7,"ter"}) ;
    print(m) ;
    //*************************************find()****************************************************
    //returns an iterator ;; if element present return that element iterator , not present returns .end() iterator
    //O(log(n)) to find an element
    auto i = m.find(4) ;
    if(i== m.end())
    cout<<"No value " <<endl ;
    else
    cout<<i->first<<" "<<i->second ;
    //*************************************erase()***************************************************
    //we can erase by index key value or by using an iterator 
    //O(log(n)) time to erase an element
    m.erase(90) ;
    print(m) ;
    i = m.find(4) ;//if i != m.end() ;
    m.erase(i) ;
    print(m) ;
    //m.clear to clear whole map container
    //if we intialize any index key then automatically the second key becomes 0 (m[i]++) ;
    return 0 ;
}