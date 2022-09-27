#include<bits/stdc++.h>
using namespace std ;
 
int main()
{
    int t ;
    cin>>t ;
    while(t--)
    {
        int n , total = 0 ,ct =0,n0 =0 ,n1 =0 ;
        auto bit ='a';
        char prev = 'b' ;
        cin>>n ;
        string s ;
        cin>>s ;
        for(auto p : s)
        {
            if(bit == 'a')
            {
                if(p=='0')
                bit = '0' ;
                else 
                bit ='1' ;
                ct++ ;
            }
            else if(p == bit)
            ct++ ;
            else
            {
                if(ct%2!=0)
                {
                    total++ ;
                    ct =0 ;
                }
                else
                ct = 1 ;
            }  
            bit = p ;
        }
        cout<<total<<endl ;
    }
    return 0 ;
}