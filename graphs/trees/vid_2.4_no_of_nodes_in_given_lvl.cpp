#include<bits/stdc++.h>
using namespace std ;

const int N = 1e3 ;
vector<int> gra[N] ;
int vis[N] ,level[N] ;

void bfs(int v)
{
    vis[v] =1 ;
    queue<int> q ;
    q.push(v) ;
    while(!q.empty())
    {
        int c = q.front() ;
        q.pop() ;
        for(auto neigh : gra[c])
        {
            if(vis[neigh] == 1) continue ;
            level[neigh] = level[c] + 1 ;
            vis[neigh] = 1 ;
            q.push(neigh) ;
        }
    }
}

int main()
{
    int n,c , nq =0;
    cin>>n>>c ;
    for(int i=0;i<n-1;i++)
    {
        int u , v ;
        cin>>u>>v ;
        gra[u].push_back(v) ;
        gra[v].push_back(u) ;
    }
    bfs(0) ;
    for(int i=0;i<n+1;i++)
    {
        if(level[i]==c)
        nq++ ;
        cout<<level[i]<<" " ;
    }
    cout<<nq<<endl ;
    return 0 ;
}