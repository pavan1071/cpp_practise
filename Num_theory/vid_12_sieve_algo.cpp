/*
sieve algo : to find all primes up to n numbers 
first we mark all the numbers as prime and we start to mark them as not prime by starting with and 
start to mark multiples of the numbers which are marked as prime by not getting cancelled from 
the numbers before them ;
time complexity :- O(N*log(log(N)))

*/

#include<bits/stdc++.h>
using namespace std ;
const int N = 1e3 ;
vector<bool> vec(N,true) ;

int main() 
{
    int n ;
    cin>>n ;
    vec[0] = vec[1] = false ;

    for(int i=2;i<n;i++)
    {
        if(vec[i])
        {
            for(int j=i*2;j<n;j+=i)
            vec[j] = false ;// log(log(N)) time complexity
        }
    }
    int q ;
    cin>>q ;
    while(q--)
    {
        int x ;
        cin>>x ;
        cout<<vec[x] ;
    }
    return 0; 
}