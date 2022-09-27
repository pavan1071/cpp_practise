// frog 1 - link https://atcoder.jp/contests/dp/tasks/dp_a
#include<bits/stdc++.h>

using namespace std ;


int fun(int i,int a[],int dp[],int k)
{
    if(i==0) return 0 ;
    if(dp[i]!=-1) return dp[i] ;
    int cost = INT_MAX  ;
    for(int l=1;l<=k;l++)
    if(i-l >= 0)
    cost = min(cost,fun(i-l,a,dp,k)+abs(a[i-l]-a[i])) ;
    return dp[i] = cost ;
}

void func(int a[] , int i , int n ,  int cost) ;
int mini =INT_MAX ; 
int main()
{
    int n,k ;
    cin>>n>>k ;
    int a[n] , dp[n];
    for(int j=0;j<n;j++)
    { 
        cin>>a[j] ;
        dp[j] = -1 ;
    }
    func(a,0,n,0);
    cout<<mini<<endl ;
    return 0 ;
}


void func(int a[] , int i , int n  , int cost)
{
    if(i>= n) return ;
    if(i == n-1)
    {
        if(mini > cost)
        {
            //cout<<cost<<" "<<mini<<endl ;
            mini = cost ;
        }
        return ;
    }

    cost=cost+abs(a[i] - a[i+1]) ;
    func(a,i+1,n,cost) ;
    cost = cost - abs(a[i] - a[i+1]);

    cost=cost+abs(a[i]-a[i+2]) ;
    func(a,i+2,n,cost) ;
    
}