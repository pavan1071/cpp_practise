#include<bits/stdc++.h>

using namespace std ;
void print(vector<int> v)
{
for(auto y : v)
cout<<y<<" " ;
cout<<endl ;
}

int main()
{
    int n ; 
    cin>>n ;
    vector<int> v ;
    for(int i=0;i<n;i++)
    {
int a ; 
cin>>a ;
v.push_back(a) ;
    }
    int min = *(min_element(v.begin(),v.end())) ;//return minimum values pointer or iterator
    cout<<min<<endl ;
    int max = *(max_element(v.begin(),v.end())) ;//returns maximum values pointer or iterator
    cout<<max<<endl ;
    int sum = accumulate(v.begin(),v.end(),0) ;// should give base sum value returns the sum of the values in the given range
    cout<<sum<<endl ;
    int ct = count(v.begin(),v.end(),4) ;// returns the count of the given elements
    cout<<ct<<endl ;
    auto it = find(v.begin(),v.end(),5) ;//returns the element's location if present else end()
    cout<<(*it) <<endl ;
    reverse(v.begin(),v.end()) ;//reverses the given vector or string or ..,
    print(v);
    
    return 0 ;
}