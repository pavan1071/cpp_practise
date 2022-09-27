#include<bits/stdc++.h>
using namespace std ;

class Solution {
  public:
    // Function to count paths between two vertices in a directed graph.
    void dfs(int s ,int d , int* c,vector<int> adj[],int vis[])
    {
        if(s==d)
        {
            *c = *c + 1 ;
            return;
        }
        for(auto child : adj[s])
        {
            vis[child] = *c ;
            dfs(child,d,c,adj,vis) ;
            vis[child] = -1 ;
        }
    }
    int countPaths(int V, vector<int> adj[], int source, int destination) {
        // Code here
        int vis[V] , counter = 0 ;
        memset(vis,-1,sizeof(vis)); 
        vis[source] = 0 ;
        dfs(source,destination,&counter,adj,vis) ;
        return counter ;
    }
};