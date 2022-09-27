#include<bits/stdc++.h>
using namespace std ;

// bool boo(string &s ,int k )
// {
//     int a[26] ;
//     memset(a,0,sizeof(a)) ;
//     for(auto l : s)
//     {
//         a[l-'a']++ ;
//     }
//     for(int l=0;l<26;l++)
//     {
//         if(a[l] != 0 && a[l] < k)
//         return false ;
//     }
//     return true ;
// }

// int maxi = 0 ;
// void sub(string &s , int index,int k,string &e)
// {
//     if(boo(e,k) == true )
//     {
//         if(e.length() > maxi)
//         maxi = e.length() ;
//     }
//     if(index == s.length())
//     return ;

//     e.push_back(s[index]) ;
//     sub(s,index+1,k,e) ;
//     e.pop_back() ;

//     sub(s,index+1,k,e) ;
// }

// int longestSubstring(string &s, int k) 
// {
//     string e = "";
//     sub(s,0,k,e) ;
//     return maxi ;
// }



int sub(string &s , int start , int end , int k)
{
    unordered_map<char , int> mp ;
    int ans ;
    for(int i=start ;i<=end ;i++)
    mp[s[i]]++ ;
    for(int i=start ;i<=end ;i++)
    {
        if(mp[s[i]] < k)
        {
            int j = i+1 ;
            while(j < end && mp[s[i]] < k)
            {
                j++ ;
            }
            return max(sub(s,start,i,k) , sub(s,j,end,k) ) ;
        }
    }
    return end - start ;
}

int longestSubstring(string &s, int k) 
{
    return sub(s,0,s.size()-1,k) ; ;
}

int main()
{
    string str ;
    cin>>str ;
    int  k ;
    cin>>k ;
    cout<<longestSubstring(str,k) ; 
    return 0 ;
}
/**
 * class Solution {
public:
int sub(string &s , int start , int end , int k)
{
    if(end - start < k) return 0 ;
    unordered_map<char , int> mp ;
    for(int i=start ;i<end ;i++)
    mp[s[i]]++ ;
    for(int i=start ;i<end ;i++)
    {
        if(mp[s[i]] < k)
        {
            int j = i+1 ;
            while(j < end && mp[s[j]] < k)
            {
                j++ ;
            }
            return max(sub(s,start,i,k) , sub(s,j,end,k) ) ;
        }
    }
    return end - start ;
}

int longestSubstring(string &s, int k) 
{
    return sub(s,0,s.size(),k) ; ;
}
};
 * 
 */