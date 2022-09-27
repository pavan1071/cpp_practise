#include<bits/stdc++.h>
using namespace std ;

const int N = 1e4 ;
vector<int> gra[N] ;
int subtree_sum[N] ;

void dfs(int vertex , int parent)
{
    subtree_sum[vertex] += vertex ;
    for(auto child : gra[vertex])
    {
        if(child == parent) continue ;
        dfs(child , vertex) ;
        subtree_sum[vertex] += subtree_sum[child] ;
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
        gra[u].push_back(v) ;
        gra[v].push_back(u) ;
    }
    dfs(1,0) ;
    long long ans = 0 ;
    for(int i=2;i<=n;i++)
    {
        int part1 = subtree_sum[i] ;
        int part2 = subtree_sum[1] - part1 ;
        ans = max(ans,(part1*1LL*part2)) ;
    }
    cout<<ans<<endl ;
}