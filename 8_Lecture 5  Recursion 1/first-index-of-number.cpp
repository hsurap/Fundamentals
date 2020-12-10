#include<iostream>
using namespace std;
int func(int a[],int n,int x,int key)
{
    if(x==n){return -1;}
    if(a[x]==key){return x;}
    func(a,n,x+1,key);
}
int main()
{
    int a[100];
    int n;cin>>n;
    int key;cin>>key;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout <<func(a,n,0,key);
}
