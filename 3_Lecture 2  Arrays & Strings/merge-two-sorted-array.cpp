#include<iostream>
using namespace std;
int main()
{
    int a[100], b[100],c[200];
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    int i=0,j=0,k=0;
    while(i<n&&j<m)
    {
        if(a[i]<=b[j])
        {
            c[k]=a[i];
            k++;i++;
        }
        else{
            c[k]=b[j];
            k++;j++;
        }
    }
    while(i<n)
    {
        c[k]=a[i];
        i++;k++;
    }
    while(j<m)
    {
        c[k]=a[j];
        j++;k++;
    }
    for(int i=0;i<m+n;i++)
    {
        cout<<c[i]<<" ";
    }
}
