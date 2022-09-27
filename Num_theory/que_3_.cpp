/*
link:https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-2/practice-problems/algorithm/hacker-with-prime-bebe28ac/

*/
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+10 ;
int hp[N] ,canremove[N] , hsh[N];

vector<int> distinctprime(int num)
{
	vector<int> pf ;
	while(num>1)
		{
			int p=hp[num] ;
			while(num%p == 0)
			{
				num /= p ;
			}
			pf.push_back(p) ;
		}
		return pf ;
}
int main() 
{
	int n,q;
	cin>>n>>q;   
	for(int i=0;i<n;i++)
	{
		int x; 
		cin>>x;
		hsh[x] = 1 ;
	}
	
	for(int i=2;i<N;i++)
	{
		if(hp[i] == 0)
		{
			for(int j=i;j<N;j+=i)
			{
				hp[j] = i ;
			}
		}
	}
	for(int i=0;i<N;i++)
	{
		if(hsh[i]==0) continue ;
		for(long long j=1;j<N;j=j*i)
		canremove[j] = 1 ;
	}
	while(q--)
	{
		bool isflag = false ;
		int num ;
		cin>>num;
		vector<int> pf = distinctprime(num);
		int num1 = num ;
		
		for(int i=0;i<pf.size();i++)
		{
			for(int j=i;j<pf.size();j++)
			{
				int pro = pf[i]*pf[j] ;
				if(i==j && num1%pro !=0) continue ;
				int torem = num1 / pro ;
				if(canremove[torem] || torem == 1)
				{
					isflag =true;
					break;
				}
			}
			if(isflag)
			break ;
		}
		if(isflag) 
		cout<<"YES"<<endl ;
		else
		cout<<"NO"<<endl ;
	}
	return 0 ;
}