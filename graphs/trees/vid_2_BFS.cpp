#include<bits/stdc++.h>
using namespace std ;

const int N = 1e3 ;
vector<int> gra[N] ;
int vis[N] ;
int level[N] ;

void bfs(int vertex) 
{
    queue<int> q ;
    q.push(vertex) ;
    cout<<vertex<<" " ;
    vis[vertex] = 1;
    while(!q.empty())
    {
        int f = q.front() ;
        q.pop() ;
        for(auto child : gra[f])
        {
            if(vis[child]==1)continue ;
            q.push(child) ;
            cout<<child<<" " ;
            vis[child] = 1 ;
            level[child] = level[f] + 1 ;
        }
    }
    cout<<endl ;
}


int main()
{
    int n ;
    cin>>n ;
    for(int i=0;i<n-1;i++)
    {
        int u , v ;
        cin>>u>>v ;
        gra[u].push_back(v) ;
        gra[v].push_back(u) ;
    }
    bfs(1) ;
    for(int i=1;i<=n;i++)
    {
        cout<<level[i]<<" " ;
    }
    return 0 ;
}