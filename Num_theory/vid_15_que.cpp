/* 
link : https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-1/practice-problems/algorithm/name-count/
*/
// IMP 1LL should be kept in the middle or else 'it will over flow first and then convert in to long long and you will get wrong result ;
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+7 ;
int M = 1e9+7 ;
vector<int>fact(N,0);

int binexp(int a ,int b,int m)
{
  int ans = 1 ;
  while(b>0)
  {
	  if(b&1)
	  {
		  ans  = (ans*1LL*a)%M ;
	  }
	  a =(a*1LL*a)%M ;
	  b =b>>1 ;
  }
  return ans ;
}

int main() {
	int t ;
	cin>>t;
	fact[0]=1; 
	for(int i=1;i<N;i++)
	{
		fact[i] = (fact[i-1]*1LL*i)%M ;
	}
	while(t--)
	{
		int n , k ;
		cin>>n>>k ;
		int num = (fact[k]*1LL*fact[n])%M ;
		int den = (fact[k-n]*1LL*fact[n])%M;
		int ans = (num*1LL*binexp(den,M-2,M))%M ;
		cout<<ans<<endl ;
	}
}