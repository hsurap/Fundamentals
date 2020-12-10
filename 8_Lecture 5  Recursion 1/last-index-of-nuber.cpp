#include<iostream>
using namespace std;
int func(int a[],int n,int key,int x)
{
    if(x==-1){return -1;}
    if(a[x]==key){return x;}
    func(a,n,key,x-1);
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
    cout <<func(a,n,key,n-1);
}
