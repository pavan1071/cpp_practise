/* 
link :https://www.hackerearth.com/problem/algorithm/monk-and-divisor-conundrum-56e0eb99/
*/

#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 ;
int hsh[N] ;
int multiplect[N] ;

int main() {
	int num;
	cin >> num;    
	for(int i=0;i<num;i++)
	{
		int x ;
		cin>>x ;
		hsh[x]++ ;
	}
	for(int i=1;i<N;i++)
	{
		for(int j=0;j<N;j+=i)
		{
			multiplect[i] += hsh[j] ;
		}
	}
	int t ;
	cin>>t ;
	while(t--)
	{
		int p , q ;
		cin>>p>>q ;
		long long lcm = (p*1LL*q) / (__gcd(p,q)) ;
		long  ans = multiplect[p] + multiplect[q] ;
		if(lcm < N)
		ans -= multiplect[lcm] ; 

		cout<<ans<<endl ;
	}
	return 0 ;
}