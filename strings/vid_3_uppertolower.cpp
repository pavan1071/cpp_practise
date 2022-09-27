#include<iostream>
using namespace std ;
//ASCII value of uppercase alphabets – 65 to 90. ASCII value of lowercase alphabets – 97 to 122.
void tolower(char *a)
{
    if(*a < 'a')
    *a = *a - 'A' + 'a' ;
}

void toupper(char* a)
{
    if(*a > 'Z')
    *a = *a - 'a' + 'A' ;
}

void upptolow_lowtoupp(char b[])
{
    for(int i=0;b[i]!='\0';i++)
    {
        if(b[i] < 'a')
        tolower(&b[i]) ;
        else
        toupper(&b[i]);
    }
}

int main()
{
    char a ;
    cin>>a ;
    tolower(&a) ;
    cout<<a;
    toupper(&a) ;
    cout<<a;
    cout<<('A'+32 == 'a') ;
    char b[9];
    cin>>b ;
    cout<<endl<<b;
    upptolow_lowtoupp(b) ;
    cout<<endl<<b ;
    return 0 ;
}