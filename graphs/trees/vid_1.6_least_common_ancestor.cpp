#include<bits/stdc++.h>
using namespace std ;

const int N=1e3 ;
vector<int>gra[N];
int par[N] ;

void dfs(int vertex , int parent=0)
{
    par[vertex] = parent ;
    for(auto child : gra[vertex])
    {
        if(child == parent) continue ;

        dfs(child , vertex) ;
    }
}

vector<int> path(int v)
{
    vector<int> y ;
    while(v != 0)
    {
        y.push_back(v) ;
        v=par[v];
    }
    reverse(y.begin(),y.end()) ;
    return y ;
}

int main()
{
    int n ;
    cin>>n ;
    for(int i=0;i<n-1;i++)
    {
        int u,v ;
        cin>>u>>v ;
        gra[u].push_back(v) ;
        gra[v].push_back(u) ;
    }
    dfs(1) ;
    int x , y ;
    cin>>x>>y ;
    vector<int> path_x = path(x) , path_y = path(y) ;
    int mn_ln = min(path_x.size(),path_y.size()) ;
    int lca =-1 ;
    for(int i=0;i<mn_ln;i++)
    {
        if(path_x[i] == path_y[i])
        lca = path_x[i] ;
        else 
        break ;
    }
    cout<<lca<<endl ;
    return 0 ;
}