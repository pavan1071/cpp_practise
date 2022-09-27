/*
unsigned 32 bits 
long long 64 bits

usually intersection for 2 sorted arrays takes O(N) time by 2 pointer method 
by using bit masking takes O(1) time ;

for presents elements position we set them 
and for remaining unset and take intersection by and operation ;

que link:https://codeforces.com/blog/entry/73558 
*/

#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int n;
    cin>>n ;
    vector<int> mask ;
    for(int i=0;i<n;i++)
    {
        int days ,ma = 0 ;
        cin>>days ;
        for(int j=0;j<days;j++)
        {
            int mas ;
            cin>>mas ;
            ma = (ma | (1<<mas) ) ;
        }
        mask.push_back(ma); 
    }
    for(auto a:mask) 
    cout<<a<<endl ;

    int ans = 0 , ansi,ansj ;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(ans < __builtin_popcount(mask[i] & mask[j])) //__builtin_popcount(mask[i] & mask[j]) built in function to
                                                            //find number of set bits in approx O(1) time.
            {
                ans = __builtin_popcount(mask[i] & mask[j]) ;
                ansi = i ;
                ansj = j ;
            }
            cout<<ans<<" "<<endl;
        }
    }
    cout<<ans<<ansi<<ansj<<endl ;
return 0 ;
}


/* input
5
4
1 4 7 9
6 
2 9 1 7 25 29
7
1 23 4 7 9 11 29
10 
2 28 8 7 9 10 30 21 18 19
4  
1 11 29 7
*/