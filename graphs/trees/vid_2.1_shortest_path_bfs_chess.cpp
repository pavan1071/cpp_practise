#include<bits/stdc++.h>
using namespace std ;

int vis[8][8] ;
int level[8][8] ;

int getx(string s)
{
    return s[0]-'a' ;
}

int gety(string s)
{
    return s[1]-'1' ;
}

vector<pair<int,int>> movements={ {1,2},{1,-2},{-1,2},{-1,-2},{2,1},{2,-1},{-2,1},{-2,-1}} ;

bool isvalid(int x ,int y)
{
    return x >= 0 && y >=0 && x < 8 && y < 8 ;
}
int bfs(string s1 , string s2)
{
    int sx = getx(s1) ;
    int sy = gety(s1) ;
    int dx = getx(s2) ;
    int dy = gety(s2) ;
    queue<pair<int,int>> q ;
    q.push({sx,sy}) ;
    vis[sx][sy] = 1 ;
    level[sx][sy] = 0 ;
    while(!q.empty())
    {
        pair<int,int> cur = q.front() ;
        q.pop() ;
        for(auto mov : movements)
        {
            int x1 = cur.first + mov.first , x2 = cur.second + mov.second ;
            if(!isvalid(x1,x2)) continue ;
            if(!vis[x1][x2])
            {
                q.push({x1,x2}) ;
                level[x1][x2] = level[cur.first][cur.second] + 1 ;
                vis[x1][x2] = 1 ;
            }
        }
    }
    return level[dx][dy] ;
}

int main()
{
    int n ;
    cin>>n ;
    while(n--)
    {
        string s1 , s2 ; 
        cin>>s1>>s2 ;
        cout<<bfs(s1,s2)<<endl ;
    }
    return 0 ;
}