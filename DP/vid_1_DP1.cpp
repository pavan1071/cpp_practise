//***********fibonacci numbers******************//
#include <bits/stdc++.h>
//DP changes factorial time to exponential time and exponential time to linear time
using namespace std ;


int dp[100] ;
// steps to solve DP's
//1. Write Brute force recursion method
//2. use required 1D or 2D or Data structure to memoise
//3. while returning we store data in data structure

//TOP DOWN APPROACH from big to small while solving 
int fib(int n)
{
    if(n==0) return 0 ;
    if(n==1) return 1 ;
    if(dp[n] != -1) return dp[n] ;//memoising in dp array

    return dp[n]=fib(n-1) + fib(n-2) ;
}

int main()
{
    memset(dp,-1,sizeof(dp)) ;// to set every element to -1
    int n ;
    cin>>n ;
    cout<<fib(n)<<dp[2]<<endl;
    //BOTTOM UP approach from small to big while solving
    dp[0] = 0 ;
    dp[1] = 1 ;
    for(int i=2;i<n;i++)
    {
        dp[i]=dp[i-1]+dp[i-2] ;
    }
    return 0 ;
}