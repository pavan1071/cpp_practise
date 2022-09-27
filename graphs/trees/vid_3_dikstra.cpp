#include<bits/stdc++.h>
using namespace std ;

const int N = 1e5 + 10 ;
int INF = 1e9 + 10 ;

vector <pair<int,int> > gra[N] ;

void dijkstra(int source,int n)
{
    vector<int> vis(N,0) ;
    vector<int> dist(N , INF) ;
    set<pair<int,int>> st ;
    st.insert({0,source}) ;
    dist[source] = 0 ;
    while(st.size() > 0)
    {
        auto cur = *st.begin() ;
        int curd = cur.first ;
        int curv = cur.second ;
        if(vis[curv]==1) 
        { 
            st.erase(st.begin()) ;
            continue;
        }
        vis[curv] = 1 ;
        st.erase(st.begin()) ;
        for(auto child : gra[curv])
        {
            int cv = child.first ;
            int cwt = child.second ;
            if(vis[cv]) continue ;
            if(dist[curv] + cwt < dist[cv])
            {
                dist[cv] = dist[curv] + cwt ;
                st.insert({dist[cv],cv}) ;
            }
        }
    }

    for(int i=1;i<n;i++)
    {
        cout<<dist[i]<<" " ;
    }
}

int main()
{
    int n ;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int u , v , wt ;
        cin>>u>>v>>wt ;
        gra[u].push_back({v,wt}) ;
    }
    dijkstra(1,13) ;
    return 0 ;
}

//https://cp-algorithms.com/graph/dijkstra.html - questions

