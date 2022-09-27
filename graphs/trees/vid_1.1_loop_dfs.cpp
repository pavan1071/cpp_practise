#include<iostream>
#include<vector>

using namespace std ;

const int N = 1e4 ;
vector<int> graph[N] ;
int vis[N] ;
bool loop= false ;

void dfs(int v , int par)
{
    vis[v] = 1 ;
    for(auto child: graph[v] )
    {
        if(vis[child] && child == par ) continue ;
        if(vis[child]) 
        {
            loop = true ;
            continue ;
        }
        dfs(child , v) ;
    }
}

int main()
{
    int n  , e ;
    cin>>n>>e ;
    for(int i=0;i<e;i++)
    {
        int v ,u ;
        cin>>v>>u ;
        graph[v].push_back(u) ;
        graph[u].push_back(v) ;
    }
    for(int i=1;i<n+1 ;i++)
    {
        if(vis[i]) continue ;
        dfs(i, 0) ;
        if(loop == true ) break ;
    }
    cout<<loop<<endl ;
    return 0 ;
}