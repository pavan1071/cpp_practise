#include<bits/stdc++.h>
using namespace std;


int mxsum(int i,int n,int a[],int dp[],int k)
{
    if(i<0)
    {
        return 0; 
    }

    if(dp[i]!=-1)
    {
        return dp[i];
    }

   dp[i]= a[i]+ max(mxsum(i-1,n,a,dp,k),mxsum(i-k,n,a,dp,k));
    return dp[i];
}
int main()
{
    int n,i,j;
    cin>>n;
    int a[n],dp[n];
    vector <int>v;
    v.push_back(3);

    for(i=13;i<n;i+=10)
    {  int x=0;
       for(j=2;j<=sqrt(i);j++)
       {
          if(i%j==0)
          {
            x=1;
            break;
          }
       }
       if(x==0)
         v.push_back(i);
    }

     for(i=0;i<n;i++)
     {
        cin>>a[i];
        dp[i]=-1;
     }

  int ans = INT_MIN ;
     for(int i=0;i<v.size();i++)
     ans = max(ans,mxsum(n-1,n,a,dp,v[i]) );

     cout<<ans<<endl;
}