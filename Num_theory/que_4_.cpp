/*
link : 
https://www.hackerearth.com/problem/algorithm/monk-and-his-father-93b639f4/

no.of coins in the piggy bank forms an eqn of form :
2^n*x1 + 2^(n-1)*x2 + 2^(n-2)*x3 + .......+2^1*xn 
and x can be as minimum as possible so 0 or 1 ;
so it forms a binary form of the num , no.of set bits gives the answer ; 
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		long long num;
	cin>>num ;
	cout <<(__builtin_popcountll(num))<<endl;  
	}
	return 0;
}