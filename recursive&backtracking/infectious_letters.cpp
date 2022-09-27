#include<bits/stdc++.h>

using namespace std ;

int fun(string &str)
{
    int i = 0 ;
    int count = 0 ;
    while(i < str.length())
    {
        int temp = 0 ;
        while(i < str.length() &&  str[i]!='a' && str[i]!= 'b' )
        {
            temp++ ;
            i++ ;
        }
        if(i < str.length() && str[i]=='a')
        {
            while( i < str.length() && str[i]!= 'b' )
            {
                temp++ ;
                i++ ;
            }
            count = count + temp ;
        }
        i++ ;
    }
    return count ;
}
int main()
{
    int n ;
    cin>>n ;
    string str ;
    cin>>str ;
    cout<<fun(str)<<endl  ;
}