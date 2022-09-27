//link : https://www.spoj.com/problems/ABCPATH/

#include<bits/stdc++.h>
using namespace std ;

char grid[51][51] ;
int vis[51][51] ;
int h , w ;

vector<pair<int,int>> movs = {{1,0},{0,1},{0,-1},{-1,0},{1,1},{1,-1},{-1,-1},{-1,1}} ;

int isValid(int i , int j)
{
    return i >=0 && j>=0 && i<h && j<w ;
}

int dfs(int i , int j , vector<char> alpha,int count = 0)
{
    if(!isValid(i,j)) return 0 ;
    vis[i][j] = 1 ;
    for(auto mov : movs)
    {
        int xmov = i+mov.first ;
        int ymov = j+mov.second ;
        if(!isValid(xmov,ymov)) continue ;
        if(vis[xmov][ymov]) continue;
        if(alpha[alpha.size()-1]=='Z') alpha.push_back('A') ;
        if(grid[xmov][ymov] != alpha[alpha.size()-1]+1) continue ;
        alpha.push_back(grid[xmov][ymov]) ;
        count = max(count , 1+dfs(xmov , ymov , alpha ,count)) ;
        alpha.pop_back() ;
    }
    return count ;
}

int main()
{
    cin>>h>>w ;
    int C = 1 ;
    while(h!=0 && w!=0)
    {
        vector<pair<int,int>> ain_grid ;
        for(int i=0;i<h;i++)
        {
            for(int j=0;j<w;j++)
            {
                cin>>grid[i][j] ;
                if(grid[i][j]=='A')
                ain_grid.push_back({i,j}) ;
            }
        }
        if(ain_grid.size()==0)
        {
            cout<<"Case "<<C<<": 0"<<endl ;
            cin>>h>>w ;
            continue;
        }
        int count = 0 ;
        // for(auto ain : ain_grid)
        // {
        //     cout<<ain.first<<" "<<ain.second<<endl ;
        // }
        vector<char> alpha_hold ;
        alpha_hold.push_back('A') ;
        for(auto pos_a : ain_grid)
        {
            count = max(count , dfs(pos_a.first,pos_a.second,alpha_hold,0)) ;
        }
        cout<<"Case "<<C<<":"<<count+1<<endl ;
        C++ ;
        
        for(int i=0;i<h;i++)
        {
            for(int j=0;j<w;j++)
            {
                vis[i][j] = 0 ;
            }
        }

        cin>>h>>w ;
        
    }
    return 0 ;
}

// 7 3
// A B C
// F E D
// G H I
// A B C
// F E D
// G H I
// L K J
// 0 0