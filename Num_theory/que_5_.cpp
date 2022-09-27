/*
link:https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/xor-challenge-2420f189/
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
	int num;
	cin >> num;    
	int len = log2(num) + 1 ;
	int a = 0 , b=0 ;
	vector<int> setbit ;
	for(int i=0;i<len;i++)
	{
		if(num & (1<<i)) 
		{
			setbit.push_back(i) ;
		}
		else
		{
			a = a|(1<<i) ;
			b |= (1<<i) ;
		}
	}
	long long ans = -1; 
	int sz = 1<<setbit.size() ;
	for(int i=0;i<sz;i++)
	{
		int a_copy= a , b_copy = b ;
		for(int j=0;j<setbit.size();j++)
		{
			if(i&(1<<j))
			a_copy |= (1<<setbit[j]) ;
			else 
			b_copy |= (1<<setbit[j]) ;
		}
		ans = max(ans ,a_copy*1LL*b_copy) ;
	}
	cout<<ans<<endl ;
}