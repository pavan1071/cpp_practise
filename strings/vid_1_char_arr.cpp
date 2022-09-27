#include<bits/stdc++.h>
using namespace std ;

void reverse (char a[]);
int getlength(char a[]) ;
bool palindrone (char a[]);

/***********************************get length / palindrone / reverse ****************************************/
bool palindrone (char a[])
{
int s = 0 ;
int e = getlength(a) - 1 ;
while(s<=e)
{
    if(a[s] !=a[e]) 
    return false ;
    s++ ;
    e-- ;
}
return true ;
}

void reverse (char a[])
{
int s = 0 ;
int e = getlength(a) - 1 ;
while(s<e)
swap(a[s++],a[e--]) ;
}

int getlength(char a[])
{
    int count = 0 ;
    for(int i=0;a[i]!= '\0';i++)
    count++ ;
    return count ;
}
// strlen(s) returns length of the string
// strcmp( s1 ,s2 )  == 0 (equal) ; != 0 not equal // returns integer
// strcpy(dest , src) ;
int main()
{
    char ch[10] ;//intializing char array
    cin>>ch;//take input like this
    // ch[3]='\0' ;//then in out put it gives only 0 1 2 char only
    // \0 comes at last , ascii value = 0 , it tells when string ends
    // char *v ;
    // v = reverse(ch) ;
    // if(strcmp(v,ch) == 0)
    // cout<<"true \n";
    // else 
    // cout<<"false \n" ;
    cout<<palindrone(ch)<<endl ;
    cout<<ch<<endl ;//like this we output the string
    // if we give name in two or more blocks then only first block will be taken as input
    // because cin stops execution when space " " or tab \t or newline \n or enter given
    return 0 ;
}