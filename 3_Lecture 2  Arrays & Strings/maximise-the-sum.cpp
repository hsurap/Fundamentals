#include<iostream>
using namespace std;
int main()
{
    int a[100],b[100];
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
    int i=0,j=0,s1=0,s2=0,maxx=0;
    while(i<n ||j<m)
    {
        if(a[i]<b[j])
        {
            s1+=a[i];
            i++;
        }
        else if(b[j]<a[i])
        {
            s2+=b[j];
            j++;
        }
        else if(a[i]==b[j])
        {
            s1+=a[i];i++;
            s2+=b[j];j++;
            int mx=max(s1,s2);
            maxx+=mx;
            s1=0;s2=0;
        }
    }

    maxx=maxx+max(s1,s2);
    cout<<endl<<maxx;

}
