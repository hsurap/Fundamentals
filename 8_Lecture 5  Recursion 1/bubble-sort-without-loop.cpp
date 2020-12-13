#include<iostream>
using namespace std;
void func(int a[],int n,int j)
{
    if(n==1){return ;}
    if(j==n-1){func(a,n-1,0);}
    if(a[j]>a[j+1]){swap(a[j],a[j+1]);}
    func(a,n,j+1);
    return;
}
int main()
{
    int a[100];
    int n;cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    func(a,n,0);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
}
