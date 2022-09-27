#include<bits/stdc++.h>
using namespace std ;

const int N = 1e3+10 ;
int parent[N] ;
int size[N] ;

void make(int i)
{
    parent[i] = i ;
    size[i] = 1 ;
}

int find(int v)
{
    if(parent[v]==v) return v; 
    return parent[v] = find(parent[v]) ;
}

void Union(int u , int v)
{
    int pu = find(u) ;
    int pv = find(v) ;
    if(pu == pv) return ;
    if(size[pu] < size[pv]) swap(pu,pv) ;
    parent[pv] = pu ;
    size[pu] += size[pv] ;
}

int main()
{
    int n ;
    cin>>n ;
    vector<pair<int,int>> cities(n+1) ;
    for(int i=1 ;i<=n;i++)
    {
        cin>>cities[i].first>>cities[i].second ;
    }


}

/* power stations or lanes can be connected with minimum cost , to get min we add a dummy node and connect cost of each
city power station construction as edge weight to dummy and find minimum spanning tree , to get solution

https://cp-algorithms.com/graph/mst_kruskal.html */