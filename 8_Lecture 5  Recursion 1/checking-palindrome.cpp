#include<iostream>
#include<cstring>
bool func(char ch[],int n,int s,int e)
{
    if(s==e||s==e+1){return true;}
    if(ch[s]!=ch[e]){return false;}
    func(ch,n,s+1,e-1);
}
using namespace std;
int main()
{
    char ch[100];
    cin>>ch;
    int n=strlen(ch);
    cout <<func(ch,n,0,n-1);
}

