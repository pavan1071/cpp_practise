#include<bits/stdc++.h>
using namespace std ;

const int N = 1e3 ;
int INF = 1e9+10 ;
vector<pair<int,int>> gra[N] ;
vector<int> lvl(N,INF) ;

int bfs(int n)
{
    deque<int> q ;
    q.push_back(1) ;
    lvl[1] = 0 ;
    while(!q.empty())
    {
        int cur = q.front() ;
        q.pop_front() ;
        for(auto child : gra[cur])
        {
            int wt = child.second ;
            int ver = child.first ;
            if(lvl[cur] + wt < lvl[ver])
            {
                if(wt == 1)
                q.push_back(ver) ;
                else
                q.push_front(ver) ;

                lvl[ver] = lvl[cur] + wt ;
            }
        }
    }
    return lvl[n]==INF ? -1 : lvl[n] ; 
}
int main()
{
    int n,m ;
    cin>>n>>m ;
    for(int i=0;i<m;i++)
    {
        int u , v ;
        cin>>u>>v ;
        gra[u].push_back({v,0}) ;
        gra[v].push_back({u,1}) ;
    }
    cout<<bfs(n)<<endl ;
    return 0 ;
}