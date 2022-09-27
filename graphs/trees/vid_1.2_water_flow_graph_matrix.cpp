#include<bits/stdc++.h>
using namespace std ;

int b_heights[210][210] ;

void print(vector<vector<int>> graph)
{
    for(auto v : graph)
    {
        for(auto i : v)
        cout<<i<<" " ;
        cout<<endl ;
    }
}

int dfs(vector<vector<int>>& heights ,int i,int j,int y )
{
    int n = heights.size() ,  m = heights[0].size() ;
    if(i < 0 || j < 0 ) return 1 ;
    if(i >= m || j >= n)return 1 ;
    if(y < heights[i][j]) return 0 ;
    if(b_heights[i][j] != -1) return b_heights[i][j] ;
    int h = heights[i][j] ;
    if( dfs(heights,i-1,j,h) ||  dfs(heights , i , j-1,h))
    {
        if( dfs(heights,i+1,j ,h)||  dfs(heights , i , j+1,h))
        return b_heights[i][j] = 1 ;
    }
    return b_heights[i][j] = 0 ;
}

vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) 
{
    vector<vector<int>> rec ;
    int r = heights.size() , c = heights[0].size() ;
    memset(b_heights,-1,sizeof(b_heights));
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(dfs(heights , i , j,1e5+10) == 1)
            {
                vector<int> y ;
                y.push_back(i) ;
                y.push_back(j) ;
                rec.push_back(y) ;
            }
        }
    }
    return rec ;   
}


int main()
{
vector<vector<int>> image ;
int c ,r ;
cin>>c>>r ; 
for(int i=0;i<r;i++)
{
    vector<int> brat ;
    for(int j=0;j<c;j++)
    {
        int x ;
        cin>>x ;
        brat.push_back(x) ;
    }
    image.push_back(brat) ;
}

image = pacificAtlantic(image) ;
print(image) ;
return 0;
}