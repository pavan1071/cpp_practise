#include<bits/stdc++.h>
using namespace std ;

vector<vector<int>> res ;

void fun(int flag , int ina , int inb , vector<int> &va , vector<int> &vb , vector<int> &temp)
{
if(ina > va.size() || inb > vb.size()) return ; 
if(flag == 1 && temp.size() > 0) 
{
    res.push_back(temp) ;
}
if(flag == 1 || flag == -1)
{
    temp.push_back(va[ina]) ;
    while(va[ina] > vb[inb] && inb < vb.size())
    inb++ ;
    flag = 2 ;
    fun(flag,ina + 1,inb,va,vb,temp);
    temp.pop_back() ;

    flag =  -1 ;
    fun(flag,ina+1,inb,va,vb,temp);

}
else if (flag == 2)
{
    temp.push_back(vb[inb]) ;
    while(vb[inb] > va[ina] && ina < va.size())
    ina++ ;
    flag = 1 ;
    fun(flag,ina ,inb+1,va,vb,temp);
    temp.pop_back() ;

    flag =  2 ;
    fun(flag,ina,inb+1,va,vb,temp);   
}

}

void print(vector<vector<int>> &res)
{
    for(auto vec : res)
    {
        for(auto in : vec)
        cout<<in<<" " ;
        cout<<endl ;
    }
}


int main()
{
    int na ,nb ;
    cin>>na>>nb ;
    vector<int> va , vb ;
    for(int i=0;i<na;i++)
    {
        int x ;
        cin>>x ;
        va.push_back(x) ;
    }
    for(int i=0;i<nb;i++)
    {
        int x ;
        cin>>x ;
        vb.push_back(x) ;
    }
    int flag = 1 ;
    vector<int> temp ;
    fun(flag , 0 ,0, va , vb , temp );
    print(res) ;
    return 0 ;
}