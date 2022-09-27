#include<bits/stdc++.h>
using namespace std  ;

void print(vector<vector<int>> graph)
{
    for(auto v : graph)
    {
        for(auto i : v)
        cout<<i<<" " ;
        cout<<endl ;
    }
}

void dfs(vector<vector<int>>& image, int r, int c, int newColor , int color)
{
    int n = image.size() ,  m = image[0].size() ;
    if(r < 0 || c < 0 ) return  ;
    if(r >= m || c >= n)return ;
    if(image[r][c] != color) return ;

    image[r][c] = newColor ;
    dfs(image,r-1,c,newColor,color);
    dfs(image,r,c-1,newColor,color);
    dfs(image,r+1,c,newColor,color);
    dfs(image,r,c+1,newColor,color);
}

vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) 
{
    dfs(image ,sr,sc,newColor,image[sr][sc]) ;
    return image ; 
}

int main()
{
vector<vector<int>> image ;
int sr , sc , newColor , c,r;
cin>>c>>r ; 
for(int i=0;i<c;i++)
{
    vector<int> brat ;
    for(int j=0;j<r;j++)
    {
        int x ;
        cin>>x ;
        brat.push_back(x) ;
    }
    image.push_back(brat) ;
}
cin>>sr>>sc>>newColor ;
print(image) ;
image = floodFill(image,sr,sc,newColor) ;
print(image) ;
return 0;
}