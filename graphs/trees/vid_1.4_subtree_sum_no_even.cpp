#include<bits/stdc++.h>
using namespace std ;

const int N = 1e3 ;
vector<int> graph[N] ;
int ss[N] , e[N] ;

void dfs(int vertex , int parent=0)//if 2nd parameter is not given it takes default value as zero
{
    if(vertex % 2 == 0) e[vertex]++ ;
    ss[vertex]+=vertex ;
    for(auto child : graph[vertex])
    {
        if(child == parent) continue ;
        
        dfs(child , vertex) ;
        ss[vertex]=ss[vertex]+ss[child];
        e[vertex]=e[vertex]+e[child] ;
    }
}

int main()
{
    int n ;
    cin>>n;
    for(int i=0;i<n-1;i++)
    {
        int u , v ;
        cin>>u>>v ;
        graph[u].push_back(v) ;
        graph[v].push_back(u) ;
    }
    dfs(1) ;
    for(int i=1;i<n+1;i++)
    {
        cout<<ss[i]<<" "<<e[i]<<endl ;
    }
    return 0;
}