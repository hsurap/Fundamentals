#include<iostream>
using namespace std;
void func(int a[],int n)
{
    if(n==1){return ;}
    for(int i=0;i<n;i++)
    {
        if(a[i]>a[i+1])
        {swap(a[i],a[i+1]);}
    }
    func(a,n-1);
}
int main()
{
    int a[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    func(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
