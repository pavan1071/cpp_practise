/* give a string s ;
q queries with l , r ;
take chars from l to r and give yes if they can form palindrone or no if can't */
/* soln: we will use 26 arrays for 26 letters to store there prefix sum and 
we get count of all elements by using this if in the count we more than 1 odd count char we give no , else yes */

#include<bits/stdc++.h>
using namespace std ;

int main()
{
    string str ;
    cin>>str ;
    int a[26][str.length()] ;
    int hsh[26][str.length()] ;
    for(int i=0;i<26;i++)
    {
        for(int j=0;j<str.length();j++)
        {
            a[i][j] = 0 ;
            hsh[i][j] = 0 ;
        }
    }
    int i = 0;
    for(auto ch : str)
    {
        a[ch - 'a'][i] = 1 ;
        i++ ;
    }
    for(int i=0;i<26;i++)
    {
        for(int j=0;j<str.length();j++)
        {
            if(j==0) hsh[i][j] = a[i][j] ;
            else 
            hsh[i][j] = hsh[i][j-1] + a[i][j] ;
        }
    }
    int q ;
    cin>>q ;
    while(q--)
    {
        int l , r ;
        cin>>l>>r ;
        int oddct = 0;
        for(int i=0;i<26;i++)
        {
            
            if((hsh[i][r] - hsh[i][l-1]) % 2 == 1 ) oddct++ ;
            if(oddct > 1)
            {
                cout<<"No"<<endl ;
                break ;
            }
        }
        if(oddct < 2)
        cout<<"yes"<<endl ;
    }
    return 0; 
}