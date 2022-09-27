#include<iostream>
#include<set>
//can be used as priority queue 
//same as set but duplicate values are allowed

using namespace std ;
void print (multiset <int> s)
{
    for(auto sa : s)
    cout<<sa<<" " ;
    cout<<endl ;
}
int main()
{
multiset<int> a ;
a.insert(9);
a.insert(1);
a.insert(2);
a.insert(9);
print(a) ;
// to delete all the 9's 
//a.erase(9) ;
//print(a) ;
// to delete one 9
auto r = a.find(9) ;
a.erase(r) ;
print(a) ;
return 0 ; 
}