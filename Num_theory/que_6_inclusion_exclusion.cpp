/*
link :https://www.hackerearth.com/problem/algorithm/the-three-musketeers-6efd5f2d/
*/

#include <bits/stdc++.h>
using namespace std;

bool isVowel(char c)
{
	return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u') ;
}

vector<string> subsets(set<char> &st)
{
	vector<string> v ;
	int pow = 1<<st.size() ;
	for(int i=0;i<pow;i++)
	{
		string str="";
        auto it = st.begin() ;
		for(int j=0;j < st.size();j++)
		{
			if(i & (1<<j))
			{
				str.push_back(*it) ;
			}
            it++ ;
		}
		if(str.size()) v.push_back(str) ;
	}
	return v ;
}
int main() {
	int t;
	cin >> t;  
	while(t--)
	{
		int n ;
		cin>>n ;
		string str[n] ;
		for(int i=0;i<n;i++)
		{
			cin>>str[i];
		}
		set<char>st , ste[n] ;
		int i = 0 ;
		for(auto s : str)
		{
			for(auto ch : s)
			{
				if(isVowel(ch))
				{
					st.insert(ch) ;
					ste[i].insert(ch) ;
				}
			}
			i++ ;
		}
		unordered_map<string,int> mp ;
		for(int i=0;i<n;i++)
		{
			vector<string> v = subsets(ste[i]) ;
			for(int j=0;j<v.size();j++)
			{
				mp[v[j]]++ ;
			}
		}
        long long ct = 0;
		for(auto &m : mp)
		{
			if(m.second >= 3) {
            long long fac = m.second ;
            long long  num = fac*(fac-1)*(fac-2) ;
            int den = 6 ;
            if(m.first.size() % 2 == 0)
            ct -= num/den ;
            else
            ct += num/den ;
            }
		}
        cout<<ct ;
	}  
    return 0 ;
}