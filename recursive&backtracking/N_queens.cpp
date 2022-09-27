#include<bits/stdc++.h>
using namespace std ;

int arr[10] ;

bool place(int k , int j)
{
    for(int i=0;i<k;i++)
    {
        if(arr[i] == j || abs(i-k) == abs(arr[i]-j))
        return false ;
    }
    return true ;
}

void n_queens( int k , int n)
{
    if(k==n) 
    {
        for(int i=0;i<n;i++)
        cout<<arr[i]<<" " ;
        cout<<endl ;
        return ;
    }
    for(int i=0;i<n;i++)
    {
        if(place(k,i))
        {
            arr[k] = i ;
            n_queens(k+1,n) ;
        }
    }
    arr[k]=0 ;
}

int main()
{
    int n ;
    cout<<" give n "<<endl ;
    cin>>n ;

    n_queens(0,n) ;

    return 0 ;
}