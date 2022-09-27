/*
in sieve algorithm 
lowest prime : the number which changes the given num first time from true to false ;
highest prime : the number which changes the given num to  false for the last time  ;

we can use these lp or up and do prime factorisation in O(log(n)) time ;
we can print all the divisors , sum , ct for all the numbers up to num;
*/

#include<bits/stdc++.h>
using namespace std ;
const int N = 1e4+12 ;
vector<bool> isprime(N,true) ;
vector<int>lp(N,0) , hp(N,0) ;
vector<int> divi[N] ;

int main()
{
    int n ;
    cin>>n ;
    isprime[0] = isprime[1] = false ;
    for(int i=2;i<n;i++)
    {
        if(isprime[i])
        {
            hp[i] = lp[i] = i ;
        for(int j=2*i ;j<n;j+=i)
        {
            if(isprime[j]==true) lp[j] = i ;
            isprime[j] = false ;
            hp[j] = i ;
        }
        }
    }
    //log(log(n)) time
    for(int i=1 ;i<n;i++)
    {
        cout<< i<<" " <<lp[i]<<" "<<hp[i]<<endl ;
    }
    //prime factorisation 
    int num = n-1 ;
    while((num) > 1)
    {
        int gp = hp[num] ;
        while((num)%gp == 0 )
        {
            cout<<gp<<" " ;
            num = num/gp ; 
        }
        
    }// log(n) time
    cout<<n<<endl ;
    //divisors
    for(int i=2;i<n;i++)
    {
        for(int j=i*1 ;j<n;j+=i)
        {
            divi[j].push_back(i) ;
        }
    }
    for(int i=2;i<n;i++)
    {
        for(auto g : divi[i])
        {
            cout<<g<<" ";
        }
        cout<<endl ;
    }
    return 0 ;
}