/*
link:http://www.spoj.com/problems/MAS/
*/
#include<bits/stdc++.h>
using namespace std ;
const long long M = 2760727302517 ;

int main()
{
    int t ;
    cin>>t;
    while(t--)
    {
        int n , q ;
        cin>>n>>q;
        long long a[n] ;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        while(q--)
        {
            long long ans = 0 ;
            int x ;
            cin>>x ;
            switch (x)
            {
            case 1:
                int c1 ,b1; 
                cin>>c1>>b1 ;
                a[c1-1] = b1 ;
                bool change = true ;
                break;
            case 2:
                int c2 , b2 ;
                cin>>c2>>b2 ;
                a[c2-1] = a[c2-1] + b2;
                bool change = true ;
                break ;
            case 3 :
            if(change == false)
            cout<<ans<<endl ;
            bool change = false ;
                for(int i=0;i<n;i++)
                {
                    for(int j=i;j<n;j++)
                    {
                        ans = (ans%M + (((a[i]-a[j])%M)*((a[i]-a[j])%M))%M);
                    }
                }
                cout<<ans<<endl ;
            }
        }
        bool change = true ;
    }
    return 0 ;
}