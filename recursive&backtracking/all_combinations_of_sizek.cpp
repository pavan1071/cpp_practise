#include<bits/stdc++.h>
using namespace std ;

vector<vector<int>> res ;

void fun(int in , vector<int> &v , int k , vector<int> &temp)
{
    if(temp.size() == k) 
    {
        res.push_back(temp) ;
        return ;
    }

    if(in >= v.size()) return ;
    
    temp.push_back(v[in]) ;
    while(v[in]==v[in+1])
    in++ ;
    fun(in+1,v,k,temp) ;
    temp.pop_back() ;

    fun(in+1,v,k,temp) ;
}

void print(vector<vector<int>> &res)
{
    for(auto vec : res)
    {
        for(auto in : vec)
        cout<<in<<" " ;
        cout<<endl ;
    }
}

int main()
{
    int n , k ;
    cin>>n>>k;
    vector<int> v ;
    for(int i=1;i<=n;i++)
    {
        v.push_back(i) ;
    }
    sort(v.begin(),v.end()) ;
    vector<int> temp ;
    fun(0 , v , k , temp ) ;
    print(res) ;
    return 0 ;
}

// vector<int> v ;
    // for(int i=0;i<n;i++)
    // {
    //     int x ;
    //     cin>>x ;
    //     v.push_back(x) ;
    // }