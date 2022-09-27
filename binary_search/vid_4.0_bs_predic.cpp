
#include<iostream>
#include<vector>
using namespace std ;

int n ;
long long m ;
vector<int> v ;

bool istrue(int h)
{
    long long wood=0 ;
    for(int i=0;i<v.size();i++)
    {
        if(v[i] > h)
        wood += (v[i]-h) ;
    }
    return (wood>=m) ;
}

int main()
{
    cin>>n>>m ;
    for(int i=0;i<n;i++)
    {
        int p ;
        cin>>p ;
        v.push_back(p) ;
    }
    long long lo = 0 , hi=1e9 ;
    while(hi - lo > 1)
    {
        int mid = (hi+lo)/2 ;
        if(istrue(mid))
        lo = mid ;
        else
        hi = mid-1 ;
    }
    if(istrue(hi))
    cout<<hi<<endl ;
    else
    cout<<lo<<endl ;
    return 0 ;
}