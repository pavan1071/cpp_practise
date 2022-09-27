#include<bits/stdc++.h>
using namespace std ;

const int N = 1e3 ;
int n , m ;
int grid[N][N] , vis[N][N] , lvl[N][N];

vector<pair<int,int>> movements = {
    {0,1},{0,-1},{1,1},{-1,-1},{1,0},{-1,0},{-1,1},{1,-1}
};

bool isvalid(int x , int y )
{
    return x>=0 && y >= 0 && x < n && y < m ;
}
int bfs()
{
    int ans = 0 ;
    int mx =0 ;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            mx = max(mx,grid[i][j]);
        }
    }
    queue<pair<int,int>> q ;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(grid[i][j]==mx)
            {
                vis[i][j] = 1 ;
                q.push({i,j}) ;
                lvl[i][j] = 0 ;
            }
        }
    }
    while(!q.empty())
    {
        pair<int,int> cur = q.front() ;
        q.pop() ;
        int curx = cur.first ;
        int cury = cur.second ;
        for(auto mov : movements)
        {
            int x = curx + mov.first ;
            int y = cury + mov.second ;
            if(!isvalid(x,y)) continue ;
            if(vis[x][y]) continue ;
            vis[x][y] = 1 ;
            q.push({x,y}) ;
            lvl[x][y] = lvl[curx][cury] + 1 ;
            ans = max(ans,lvl[x][y]) ;
        }
    }
    return ans ;
}

int main()
{
    int t ;
    cin>>t ;
    while(t--)
    {
        cin>>n>>m ;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>grid[i][j];
            }
        }
        cout<<bfs()<<endl ;
    }
    return 0 ;
}