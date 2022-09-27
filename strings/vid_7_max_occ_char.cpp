#include<iostream>
#include<string>

using namespace std ;
// O(n) time 
// not always stl is best 
// in strings using by values is much better
// free your mind and search for better solution 
char getMaxoccuChar(string str)
{
    int arr[26]={0} ;
    for(auto t:str)
    {
        arr[t - 'a']++ ;
    }
    int max = arr[0] ;
    int in = 0 ;
    for(int i=1;i<26;i++)
    {
        if(max < arr[i])
        {
            max = arr[i] ;
            in = i ;
        }
    }
    return in +'a' ;
}

int main()
{
    string str ;
    cin>>str ;
    cout<<getMaxoccuChar(str)<<endl ;
    return 0 ;
}
