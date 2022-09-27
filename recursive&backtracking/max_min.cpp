#include<bits/stdc++.h>
using namespace std ;

int fun(int in , vector<int> &v )
{
    if(in == v.size()-1) return v[in] ;
    else
    return max(v[in],fun(in+1,v));
}


int main()
{
    int n  ;
    cin>>n;
    vector<int> v ;
    for(int i=0;i<n;i++)
    {
        int x ;
        cin>>x ;
        v.push_back(x) ;
    }
    cout<<fun(0 , v ) ;
    return 0 ;
}
