#include<bits/stdc++.h>
using namespace std ;

const int N = 1e3 ;
vector<int> graph[N] ;
int depth[N]  ;

void dfs(int vertex , int parent=0)//if 2nd parameter is not given it takes default value as zero
{
    for(auto child : graph[vertex])
    {
        if(child == parent) continue ;
        depth[child] = depth[vertex]+1 ;
        dfs(child , vertex) ;
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
    int mx_dep=-1 , mx_dep_node ;
    for(int i=1;i<=n;i++)
    {
        if(mx_dep < depth[i])
        {
            mx_dep = depth[i] ;
            mx_dep_node = i ;
        }
        depth[i]=0 ;
    }
    cout<<mx_dep_node<<" " ;
    dfs(mx_dep_node) ;
    mx_dep=-1  ;
    for(int i=1;i<=n;i++)
    {
        if(mx_dep < depth[i])
        {
            mx_dep = depth[i] ;
            mx_dep_node = i ;
        }
    }
    cout<<mx_dep_node<<endl<<mx_dep<<endl ;
    return 0;
}