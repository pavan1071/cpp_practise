/*Depth first search 
recusive method */
#include<bits/stdc++.h>
using namespace std ;

const int N = 1e5 ;

vector<int> graph[N] ;
int vis[N] ;
vector<vector<int>> g ;
vector<int> f ;

void dfs(int v)
{
    vis[v] = 1 ;
    f.push_back(v) ;
    for(auto child : graph[v])
    {
        if(vis[child]) continue ;
        dfs(child) ;
    }
}

int no_connected(int n)
{
    int coun=0;
    for(int i=1;i<n+1;i++)
    {
        if(vis[i])continue ;
        f.clear() ;
        dfs(i) ;
        g.push_back(f) ;
        coun++ ;
    }
    return coun ;
}

void print(vector<vector<int>> f)
{
    for(auto y : f)
    {
        for(auto a : y)
        cout<<a<<" " ;
        cout<<endl ;
    }

}

int main()
{
    int n , m ;
    cin>>n>>m ;
    for(int i=0;i<m;i++)
    {
        int v1,v2 ;
        cin>>v1>>v2 ;
        graph[v1].push_back(v2) ;
        graph[v2].push_back(v1) ;
    }
cout<<no_connected(n)<<endl ;
print(g) ;
return 0 ;
}

