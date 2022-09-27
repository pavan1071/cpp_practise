#include<bits/stdc++.h>
using namespace std ;
// lower bound returns address of the given value(if present) or iterator of the given value or value which is next greater than given one
// upper bound returns address or iterator of the given value which is next greater than this
// log(n) is time complexity for sets and maps(key) it is O(n) so use like s.lower_bound(int) or m.lower_bound(int) to get in log(n) time
int main()
{
    vector<int> a;
    int n ;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int t ;
        cin>>t ;
        a.push_back(t) ;
    }
    sort(a.begin(),a.end()) ;
    auto r = lower_bound(a.begin(),a.end(),2) ;//using like this O(n) time complexity
    cout<<(*r)<<endl ;
    r = upper_bound(a.begin(),a.end(),2) ;
    cout<<(*r) ;
return 0 ;
}