#include <bits/stdc++.h>

using namespace std ;

int dp[105][100005] ;
bool fun(int a[] , int n , int sum)
{
    if(sum == 0) return true ;
    if(n < 0) return false ; 
    if(dp[n-1][sum] != -1) return dp[n-1][sum] ;

    bool is = fun(a,n-1,sum) ;
    is |= fun(a,n-1,sum - a[n - 1]) ;

    return dp[n-1][sum] = is ;
}

int main()
{
    memset(dp,-1,sizeof(dp)) ;
    int n,sum ;
    cin>>n>>sum ;
    int a[n] ;
    for(int i=0;i<n;i++)
    {
        cin>>a[i] ;
    }
    cout<<fun(a,n,sum)<<endl ;
    
}