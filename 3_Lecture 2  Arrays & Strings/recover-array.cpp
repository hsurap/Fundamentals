#include<iostream>
using namespace std;
void recover(int a[],int b[],int n)
{
    int l,r;
    if(n%2==1)
    {
        int m=n/2;
        b[m]=a[0];
        l=m-1;r=m+1;
        for(int i=1;i<n;)
        {
            b[l]=a[i];
            i++;l--;
            b[r]=a[i];
            i++;r++;
        }
    }
    else{
        int m=n/2;
        int l=m-1;int r=m;
        for(int i=0;i<n;)
        {
            b[l]=a[i];
            i++;l--;
            b[r]=a[i];
            i++;r++;
        }
    }
}
int main()
{
    int a[100];
    int b[100];
    int n;cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    recover(a,b,n);
    for(int i=0;i<n;i++)
    {
        cout<<b[i]<<" ";
    }
}
