#include<iostream>

using namespace std; 

int fun(int n , int a[],int dp[])
{
    int ans = 1 ;
    if(dp[n] != -1) return dp[n] ;
for(int j=0;j<n;j++)
if(a[n] > a[j])
ans = max(ans , fun(j,a,dp)+1) ;

return dp[n] = ans ;
}
//O(N^2) //calls  in N times for one call N time total O(N^2) 
int main()
{
    int n ;
    cin>>n ;
    int a[n] ,dp[n] ;
    for(int i=0;i<n;i++)
    { 
        cin>>a[i] ;
        dp[i] = -1 ;
    }
    int h =0 ; 
    for(int t = 0 ;t<n;t++)
    {
        h = max(h,fun(t,a,dp)) ;
    }
    cout<<h<<endl ;
    return 0 ;
}