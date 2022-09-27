#include<bits/stdc++.h>
using namespace std ;

const int N = 1e3 ;
vector<int> graph[N] ;
int depth[N], height[N] ;

void dfs(int vertex , int parent=0)//if 2nd parameter is not given it takes default value as zero
{
    for(auto child : graph[vertex])
    {
        if(child == parent) continue ;
        depth[child]=depth[vertex] + 1 ;
        dfs(child , vertex) ;
        height[vertex]=max(height[vertex],height[child]+1);
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
        cout<<depth[i]<<" "<<height[i]<<endl ;
    }
    return 0;
}