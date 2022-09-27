#include<iostream>
#include<vector>
using namespace std ;

int lower_bound(int t , vector<int>&f , int lo , int hi)
{
    while(hi - lo > 1)
    {
        int mid = (hi+lo) / 2 ;
        if(f[mid] < t)
        lo = mid + 1 ;
        else
        hi = mid ;
    }
    if(f[lo] >= t)
    return lo ;
    if(f[hi] >= t)
    return hi ;
    return -1 ;
}

int upper_bound(int t , vector<int>&f , int lo , int hi)
{
    while(hi - lo > 1)
    {
        int mid = (hi+lo) / 2 ;
        if(f[mid] <= t)
        lo = mid + 1 ;
        else
        hi = mid ;
    }
    if(f[lo] > t)
    return lo ;
    if(f[hi] >t)
    return hi ;
    return -1 ;
}

int main()
{
    int n ;
    cin>>n ;
    vector <int> f ;
    for(int i=0;i<n;i++)
    {
        int p ;
        cin>>p ;
        f.push_back(p) ;
    }
    int to_find ;
    cin>>to_find ;
    int lb = lower_bound(to_find,f,0,f.size()-1) ;
    cout<<lb<<" index "<< f[lb]<<endl ;
    int ub = upper_bound(to_find,f,0,f.size()-1) ;
    cout<<ub<<" index "<< f[ub]<<endl ;
    return 0 ;
}