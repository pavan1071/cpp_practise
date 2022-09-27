#include<iostream>
#include<set>

using namespace std ;
//same as maps 
// red black trees , time complexities log(n)
void print (set<int> s)
{
    for(auto it : s)
    {
        cout<< it <<" " <<endl ;
    }
    
}
int main()
{
    set<int> s ;
    s.insert(1) ;//log(n) time
    s.insert(9) ;
    s.insert(4) ;
    s.insert(0) ;
    print(s) ;
    auto d=s.find(4) ;//log(n)
    if( d != s.end())
    cout<<*d <<endl ;
    s.erase(d) ; 
    print(s) ;
    return 0 ;
}