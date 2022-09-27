#include<iostream>
#include<string>

using namespace std ;

bool checkequal(int a[] , int b[])
{
    for(int i=0;i<26;i++)
    {
        if(a[i] != b[i])
        return false ;
    }

    return true ;
}

bool checkinclusion(string s1 , string s2)
{
    int arr1[26] = {0} ;
    for(auto t : s1)
    arr1[t - 'a']++ ;
    
    int arr2[26] = {0} ;

    int i =0 ;
    while(i<s1.length() && i<s2.length())
    {
        arr2[s2[i] - 'a']++ ;
        i++ ;
    }
        
    
    if(checkequal(arr1,arr2))
    return true ;

    int windowsize = s1.length() ;

    while(i<s2.length())
    {
        arr2[s2[i] - 'a' ]++;
        arr2[s2[i - windowsize]-'a']-- ;
        if(checkequal(arr1,arr2))
        return true ;
        i++ ;
    }
    return false ;
}

int main()
{
    string str1 , str2 ;
    cin>>str1>>str2 ;
    cout<<checkinclusion(str1 , str2) ;
    return 0 ;
}