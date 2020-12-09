#include<iostream>
using namespace std;
int func(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {if(n==1){return 1;}
    if(a[0]>a[1]){swap(a[0],a[1]);}
    func(a+1,n-1);}
}
int main()
{
    int a[]={2,42,13,13,16,0,33,32,44,1,2,44};
    int n=sizeof(a)/sizeof(int);
    func(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
