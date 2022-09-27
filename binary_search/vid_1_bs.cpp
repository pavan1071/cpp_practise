//monotonic functions 
//predicate (tttttfffffffffff..)
#include<bits/stdc++.h>
using namespace std ;

int bs(int t ,vector<int>&v , int st ,int end )
{
    if(st > end) return -1 ;
    int mid = (st + end )/ 2 ;
    if(t == v[mid] )
    return mid ;
    if(t < v[mid])
    return bs(t,v,st,mid-1) ;
    if(t>v[mid])
    return bs(t,v,mid+1,end) ;
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
    cout<<bs(to_find,f,0,f.size()-1)<<"index"<<endl ;
    return 0 ;
}