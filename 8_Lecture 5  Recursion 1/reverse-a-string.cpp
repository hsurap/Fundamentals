#include<iostream>
#include<cstring>
using namespace std;
void func(char ch[],int n,int s,int e)
{
    if(s>=e){return; }
    else{swap(ch[s],ch[e]);}
    func(ch,n,s+1,e-1);
}
int main()
{
    char ch[100];
    cin>>ch;
    int n=strlen(ch);
    func(ch,n,0,n-1);
    cout<<ch;
}
