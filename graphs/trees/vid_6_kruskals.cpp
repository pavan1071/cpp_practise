#include<bits/stdc++.h>
using namespace std ;

const int N = 1e5 ;
int parent[N] ;
int size[N] ;

void make(int v)
{
    parent[v] = v ;
    size[v] = 1 ;
}

int find(int v)
{
    if(parent[v]==v) return v ;
    //Path compression
    return parent[v] = find(parent[v]) ;
}

void Union (int a , int b)
{
    a = find(a) ;
    b = find(b) ;
    if(a==b) return ;
    //union by size
    if(size[a] < size[b])
    swap(a,b) ;
    parent[b] = a ;
    size[a] += size[b] ;
}

int main()
{
    int n , m ;
    cin>>n>>m ;
    for(int i=1;i<=n;i++)
    {
        make(i) ;
    }
    vector<pair<int,pair<int,int>>> ve ;
    for(int i=0;i<m;i++)
    {
        int u, v,wt ;
        cin>>wt>>v>>u ;
        ve.push_back({wt,{u,v}}) ;
    }
    sort(ve.begin(),ve.end()) ;
    int total_wt = 0;

    for(auto edge : ve)
    {
        int ewt = edge.first ;
        int eu = edge.second.first ;
        int ev = edge.second.second ;
        if(find(eu)==find(ev)) continue ;
        Union(eu,ev) ;
        cout<<eu<<" "<<ev<<" "<<ewt<<" "<<endl ;
        total_wt += ewt ; 
    }
    cout<<total_wt<<endl ;
return 0 ;
}